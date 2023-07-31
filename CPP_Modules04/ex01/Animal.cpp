/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 10:16:39 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/07/31 11:19:26 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Constructors
Animal::Animal()
{
    this->type = "Animal";
    std::cout << this->type << " Default Constructor called" << std::endl;
}

Animal::Animal(std::string type):type(type)
{
    std::cout << "Animal " << this->type << " Default Constructor called" << std::endl;
}


Animal::Animal(const Animal &copy)
{
    *this = copy;
    std::cout << " Copy Constructor called" << std::endl;
}

// Destructor
Animal::~Animal()
{
    std::cout << " Destructor called" << std::endl;
}

// Operators
Animal & Animal::operator=(const Animal &assign)
{
    std::cout << " assign called" << std::endl;
    if(this != &assign)
    {
        this->type = assign.type;
    }
    return *this;
}

std::string Animal::getType() const
{
    return this->type;
}


void Animal::makeSound(void) const
{
    std::cout << "Animal Sound" << std::endl;
}
 

