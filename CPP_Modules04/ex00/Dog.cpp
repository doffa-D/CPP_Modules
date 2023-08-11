/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 10:42:12 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/11 11:15:17 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Constructors
Dog::Dog(): Animal("Dog")
{
    std::cout << this->type << " Default Constructor called" << std::endl;
}

// Destructor
Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
}

Dog & Dog::operator=(const Dog &assign)
{
    std::cout << "Dog assign called" << std::endl;
    if(this != &assign)
    {
        this->type = assign.type;
    }
    return *this;
}

Dog::Dog(const Dog &copy)
{
    std::cout << "Dog Copy Constructor called" << std::endl;
    *this = copy;
}

void Dog::makeSound(void) const
{
    std::cout << "Dog Sound" << std::endl;
}
 

