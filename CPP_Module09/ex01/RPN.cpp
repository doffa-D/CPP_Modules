/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:59:08 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/09/04 10:04:56 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RPN.hpp"

void RPN::checkNumber(std::string string)
{
    std::vector<std::string> vector;
    while(string.find(' ') != std::string::npos)
    {
        size_t Pos = string.find(' ');
        std::string token = string.substr(0,Pos);
        vector.push_back(token);
        string.erase(0,Pos + 1);
    }
    if(!string.empty())
        vector.push_back(string);
    for(size_t i = 0;i < vector.size();i++)
    {
        if(vector[i].size() > 1)
            throw std::runtime_error("Error");
    }
}

void RPN::calculator(std::string number)
{
    checkNumber(number);
    for(size_t i = 0;i < number.length();i++)
    {
        if(number[i] == ' ')
            continue;
        else if(isdigit(number[i]))
        {
            my_stack.push(number[i] - '0');
        }
        else if(my_stack.size() >= 2 && (number[i] == '+' || number[i] == '-' || number[i] == '*' || number[i] == '/'))
        {
            int a = my_stack.top();
            my_stack.pop();
            int b = my_stack.top();
            my_stack.pop();
            if(number[i] == '+')
                my_stack.push(b + a);
            else if(number[i] == '-')
                my_stack.push(b - a);
            else if(number[i] == '*')
                my_stack.push(b * a);
            else if(number[i] == '/')
                my_stack.push(b / a);
        }
        else
            throw std::runtime_error("Error");
        if(my_stack.size() == 1 && i + 1 == number.length())
        {
            std::cout << my_stack.top() << std::endl;
        }
    }

}