/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:59:08 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/09/03 17:26:45 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RPN.hpp"

void RPN::calculator(std::string number)
{
    for(int i = 0;number[i];i++)
    {
        if(number[i] == ' ')
        {
            continue;
        }
        else if(isdigit(number[i]))
        {
            int nb = number[i]- '0';
            my_stack.push(nb);
        }
        else if(number.size() >= 2)
        {
            if(number[i] == '+' || number[i] == '-' || number[i] == '*' || number[i] == '/')
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
            {
                std::cout << "Invalid Input" << std::endl;
                return ;
            }
        }
        else if(my_stack.size() == 1)
        {
            std::cout << my_stack.top() << std::endl;
        }
        else
        {
            std::cout << "Invalid Input" << std::endl;
        }
    }
    MutantStack<int>::iterator it = my_stack.begin();
    for(;it != my_stack.end();it++)
    {
        std::cout << *it << std::endl;
    }
}