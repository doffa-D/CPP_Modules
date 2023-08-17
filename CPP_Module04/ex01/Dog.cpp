/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 10:42:12 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/07/31 15:28:27 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Constructors
Dog::Dog(): Animal("Dog")
{
    this->Brain_ = new Brain();
    std::cout << this->type << " Default Constructor called" << std::endl;
}

// Destructor
Dog::~Dog()
{
    delete this->Brain_;
    std::cout << "Dog Destructor called" << std::endl;
}

Dog & Dog::operator=(const Dog &assign)
{
    std::cout << "Dog assign called" << std::endl;
    if(this != &assign)
    {
        this->type = assign.type;
        this->Brain_ = new Brain(*assign.Brain_);
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
 

