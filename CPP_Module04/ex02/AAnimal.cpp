/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 10:16:39 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/07/31 12:27:26 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

// Constructors
AAnimal::AAnimal()
{
    this->type = "AAnimal";
    std::cout << this->type << " Default Constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type):type(type)
{
    std::cout << "AAnimal " << this->type << " Default Constructor called" << std::endl;
}


AAnimal::AAnimal(const AAnimal &copy)
{
    *this = copy;
    std::cout << " Copy Constructor called" << std::endl;
}

// Destructor
AAnimal::~AAnimal()
{
    std::cout << "AAnimal Destructor called" << std::endl;
}

// Operators
AAnimal & AAnimal::operator=(const AAnimal &assign)
{
    std::cout << " assign called" << std::endl;
    if(this != &assign)
    {
        this->type = assign.type;
    }
    return *this;
}

std::string AAnimal::getType() const
{
    return this->type;
}
