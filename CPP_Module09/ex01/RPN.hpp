/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:03:07 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/09/16 19:31:02 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

class RPN 
{
    private:
        std::stack<int> my_stack;
    public:
        RPN();
        RPN(const RPN &copy);
        ~RPN();
        RPN & operator=(const RPN &assign);
        void calculator(std::string number);
        void checkNumber(std::string number);
};

#endif // RPN_HPP
