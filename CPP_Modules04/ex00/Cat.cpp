/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 10:42:35 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/07/31 11:21:14 by hdagdagu         ###   ########.fr       */
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

void Cat::makeSound(void) const
{
    std::cout << "Cat Sound" << std::endl;
}
 

