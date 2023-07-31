/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 10:42:12 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/07/31 11:19:33 by hdagdagu         ###   ########.fr       */
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
    std::cout << " Destructor called" << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << "Dog Sound" << std::endl;
}
 

