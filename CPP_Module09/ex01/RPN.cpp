/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:59:08 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/09/16 19:35:59 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RPN.hpp"

RPN::RPN()
{
}

RPN::RPN(const RPN &copy)
{
    *this = copy;
}

RPN::~RPN()
{
}

RPN & RPN::operator=(const RPN &assign)
{   
    if(this != &assign)
    {
        this->my_stack = assign.my_stack;
    }
    return *this;
}

void RPN::checkNumber(std::string string)
{
    std::istringstream iss(string);
    int number;
    while(iss >> number)
    {
        if(number > 9)
        {
            throw std::runtime_error("Error");
        }
    }
}

void RPN::calculator(std::string number)
{
    checkNumber(number);
    size_t i = 0;
    for(;i < number.length();i++)
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
    }
    if(my_stack.size() == 1 && i == number.size())
    {
        std::cout << my_stack.top() << std::endl;
    }
    if(my_stack.size() > 1)
        throw std::runtime_error("Error");
}