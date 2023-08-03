/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 10:42:35 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/03 12:36:08 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Constructors
Cat::Cat():AAnimal("Cat")
{
    this->Brain_ = new Brain();
    std::cout << this->type << " Default Constructor called" << std::endl;
}

// Destructor
Cat::~Cat()
{
    delete this->Brain_;
    std::cout << "Cat Destructor called" << std::endl;
}


Cat & Cat::operator=(const Cat &assign)
{
    std::cout << "Cat assign called" << std::endl;
    if(this != &assign)
    {
        this->type = assign.type;
        this->Brain_ = new Brain(*assign.Brain_);
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
 

