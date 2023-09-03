/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:03:07 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/09/03 17:19:43 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <iostream>
#include <string>
template <typename T> 
class MutantStack : public std::stack<T>
{
    private:
    public:
    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator begin()
    {
        return this->c.begin();
    }
    iterator end()
    {
        return this->c.end();
    }
};

class RPN 
{
    private:
        MutantStack<int> my_stack;
    public:
        void calculator(std::string number);
};

#endif // RPN_HPP
