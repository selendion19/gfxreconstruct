/*
** Copyright (c) 2018 Valve Corporation
** Copyright (c) 2018 LunarG, Inc.
**
** Licensed under the Apache License, Version 2.0 (the "License");
** you may not use this file except in compliance with the License.
** You may obtain a copy of the License at
**
**     http://www.apache.org/licenses/LICENSE-2.0
**
** Unless required by applicable law or agreed to in writing, software
** distributed under the License is distributed on an "AS IS" BASIS,
** WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
** See the License for the specific language governing permissions and
** limitations under the License.
*/

#include "util/argument_parser.h"

#include "util/logging.h"

#include <cstring>
#include <sstream>

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(util)

ArgumentParser::ArgumentParser(int32_t            argc,
                               const char** const argv,
                               const std::string& options,
                               const std::string& arguments,
                               const int32_t      expected_non_opt_args)
{
    // NOTE: Do not initialize the logging functionality here since we rely on the
    //       main application to do this.

    if (argc > 1 && nullptr != argv)
    {
        std::vector<std::string> command_line_args;
        command_line_args.resize(argc - 1);
        for (int32_t cur_arg = 1; cur_arg < argc; ++cur_arg)
        {
            command_line_args[cur_arg - 1] = argv[cur_arg];
        }

        Init(command_line_args, options, arguments, expected_non_opt_args);
    }
}

ArgumentParser::ArgumentParser(bool               first_is_exe_name,
                               const char*        args,
                               const std::string& options,
                               const std::string& arguments,
                               const int32_t      expected_non_opt_args)
{
    // NOTE: Do not initialize the logging functionality here since we rely on the
    //       main application to do this.

    size_t args_len = strlen(args);
    if (nullptr != args && args_len > 0)
    {
        std::vector<std::string> command_line_args;
        std::string              arg_string = args;
        size_t                   last_start = 0;

        // We don't want to save the executable name, just the arguments.
        // So, if the executable name is in the list, skip the first argument.
        bool save_component = !first_is_exe_name;

        for (size_t index = 0; index < arg_string.size(); ++index)
        {
            if (arg_string[index] == '\"')
            {
                size_t end_index = arg_string.find('\"', index + 1);
                if (end_index == std::string::npos)
                {
                    is_invalid_ = true;
                    GFXRECON_LOG_FATAL("Error: ArgumentParser command-line string contains unmatched quotes.", args);
                    return;
                }

                if (save_component)
                {
                    // Pull out just the string, not the quotes
                    command_line_args.push_back(arg_string.substr(index + 1, end_index - index - 1));
                }
                else
                {
                    save_component = true;
                }
                index      = end_index + 1;
                last_start = index + 1;
            }
            else if (arg_string[index] == ' ')
            {
                if (save_component)
                {
                    command_line_args.push_back(arg_string.substr(last_start, index - last_start));
                }
                else
                {
                    save_component = true;
                }
                last_start = index + 1;
            }
        }

        if (save_component)
        {
            command_line_args.push_back(arg_string.substr(last_start, arg_string.size() - last_start));
        }
        Init(command_line_args, options, arguments, expected_non_opt_args);
    }
}

void ArgumentParser::Init(std::vector<std::string> command_line_args,
                          const std::string&       options,
                          const std::string&       arguments,
                          const int32_t            expected_non_opt_args)
{
    std::vector<std::string> valid_options;
    std::string              sub_string;
    std::string              sub_string2;

    is_invalid_ = false;

    uint32_t option_index = 0;
    if (options.size() > 0)
    {
        std::stringstream option_strstr(options);
        while (option_strstr.good())
        {
            std::getline(option_strstr, sub_string, ',');

            // If a pipe '|' exists, we have multiple command-line
            // values that can set the same option.  So, set all
            // of the values to point to the same option flag.
            if (sub_string.find('|') != std::string::npos)
            {
                std::stringstream option_strstr_2(sub_string);
                while (option_strstr_2.good())
                {
                    std::getline(option_strstr_2, sub_string2, '|');
                    options_indices_[sub_string2] = option_index;
                }
            }
            // Otherwise, we only have one option value for the flag
            else
            {
                options_indices_[sub_string] = option_index;
            }
            option_index++;
        }
    }
    options_present_.resize(option_index);

    uint32_t argument_index = 0;
    if (arguments.size() > 0)
    {
        std::stringstream arguments_strstr(arguments);
        while (arguments_strstr.good())
        {
            std::getline(arguments_strstr, sub_string, ',');

            // If a pipe '|' exists, we have multiple command-line
            // values that can set the same argument.  So, set all
            // of the values to point to the same argument.
            if (sub_string.find('|') != std::string::npos)
            {
                std::stringstream arguments_strstr_2(sub_string);
                while (arguments_strstr_2.good())
                {
                    std::getline(arguments_strstr_2, sub_string2, '|');
                    arguments_indices_[sub_string2] = argument_index;
                }
            }
            // Otherwise, we only have one argument value pair
            else
            {
                arguments_indices_[sub_string] = argument_index;
            }
            argument_index++;
        }
    }
    argument_values_.resize(argument_index);

    for (int32_t cur_arg = 0; cur_arg < command_line_args.size(); ++cur_arg)
    {
        bool is_option   = false;
        bool is_argument = false;

        // Strip off any quotes surrounding the whole string
        std::string current_argument = command_line_args[cur_arg];
        if (current_argument[0] == '\"')
        {
            current_argument.erase(0, 1);
        }
        if (current_argument[current_argument.size() - 1] == '\"')
        {
            current_argument.erase(current_argument.size() - 1);
        }

        // Optional option/argument
        if (current_argument[0] == '-')
        {
            for (const auto& cur_option : options_indices_)
            {
                if (cur_option.first == current_argument)
                {
                    options_present_[cur_option.second] = true;
                    is_option                           = true;
                    break;
                }
            }
            if (!is_option)
            {
                for (const auto& cur_argument : arguments_indices_)
                {
                    if (cur_argument.first == current_argument)
                    {
                        // Make sure we have room for the argument's value.
                        if (cur_arg == (command_line_args.size() - 1))
                        {
                            // We're on the last argument, so add this to the invalid list.
                            invalid_values_present_.push_back(current_argument);
                            is_invalid_ = true;
                        }
                        else
                        {
                            // Get the next value and strip off any quotes surrounding the whole string
                            std::string argument_value = command_line_args[++cur_arg];
                            if (argument_value[0] == '\"')
                            {
                                argument_value.erase(0, 1);
                            }
                            if (current_argument[argument_value.size() - 1] == '\"')
                            {
                                argument_value.erase(argument_value.size() - 1);
                            }
                            argument_values_[cur_argument.second] = argument_value;
                        }
                        is_argument = true;
                        break;
                    }
                }
            }
            if (!is_option && !is_argument)
            {
                // Past the valid number of non-optional arguments, this must
                // be an invalid value.
                invalid_values_present_.push_back(current_argument);
                is_invalid_ = true;
                GFXRECON_LOG_FATAL("Invalid command-line setting \'%s\'", current_argument.c_str());
            }
        }
        else
        {
            if (non_option_arguments_present_.size() < static_cast<size_t>(expected_non_opt_args))
            {
                non_option_arguments_present_.push_back(current_argument);
            }
            else
            {
                // Past the valid number of non-optional arguments, this must
                // be an invalid value.
                invalid_values_present_.push_back(current_argument);
                is_invalid_ = true;
            }
        }
    }

    if (expected_non_opt_args > non_option_arguments_present_.size())
    {
        // Expected some number of arguments and didn't get any
        is_invalid_ = true;
        GFXRECON_LOG_FATAL("Error: Different number of non-optional arguments.\n"
                           "Error:     Requires %d options, but %d provided",
                           expected_non_opt_args,
                           non_option_arguments_present_.size());
    }
}

bool ArgumentParser::IsOptionSet(const std::string& option)
{
    auto ret_iterator = options_indices_.find(option);

    if (ret_iterator != options_indices_.end())
    {
        return options_present_[ret_iterator->second];
    }
    return false;
}

const std::string& ArgumentParser::GetArgumentValue(const std::string& argument)
{
    static const std::string empty_string("");
    auto                     ret_iterator = arguments_indices_.find(argument);

    if (ret_iterator != arguments_indices_.end() && argument_values_[ret_iterator->second].size() > 0)
    {
        return argument_values_[ret_iterator->second];
    }
    return empty_string;
}

GFXRECON_END_NAMESPACE(util)
GFXRECON_END_NAMESPACE(gfxrecon)
