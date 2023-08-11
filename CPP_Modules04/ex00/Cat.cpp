/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 10:42:35 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/11 11:15:26 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Constructors
Cat::Cat():Animal("Cat")
{
    std::cout << this->type << " Default Constructor called" << std::endl;
}

// Destructor
Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
}


Cat & Cat::operator=(const Cat &assign)
{
    std::cout << "Cat assign called" << std::endl;
    if(this != &assign)
    {
        this->type = assign.type;
    }
    return *this;
}

Cat::Cat(const Cat &copy)
{
    std::cout << "Cat Copy Constructor called" << std::endl;

    *this = copy;
}

void Cat::makeSound(void) const
{
    std::cout << "Cat Sound" << std::endl;
}
 

