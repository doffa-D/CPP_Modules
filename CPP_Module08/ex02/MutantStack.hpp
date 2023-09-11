/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 10:59:02 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/09/06 20:38:02 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>
#include <string>
template <typename T> 
class MutantStack : public std::stack<T>
{
    private:
    public:
        MutantStack()
        {
            // std::cout << "Default Constructor called of MutantStack" << std::endl;
        }
        MutantStack(const MutantStack &copy)
        {
            (void) copy;
            // std::cout << "Copy Constructor called of MutantStack" << std::endl;
        }
        ~MutantStack()
        {
            // std::cout << "Destructor called of MutantStack" << std::endl;
        }
        MutantStack & operator=(const MutantStack &assign)
        {
            (void) assign;
            return *this;
        }
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

#endif // MutantStack_HPP
