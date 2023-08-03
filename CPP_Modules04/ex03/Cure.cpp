/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:42:09 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/03 17:02:06 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    this->type = "cure";
    std::cout << "Cure " << this->type <<" default Constructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &assign)
{
    std::cout << "Cure " << this->type <<" assign Operator called" << std::endl;

    if(this != &assign)
    {
        this->type = assign.type;
    }
    return *this;
}

Cure::Cure(const Cure &copy)
{
    *this = copy;
    std::cout << "Cure " << this->type << " Copy Constructer called" << std::endl;
}
AMateria *Cure::clone()const
{
    return (new Cure(*this));
}


void    Cure::use(ICharacter& target)
{
    std::cout << "Cure: " << "* heals " << target.getName() << "’s wounds *";
}

Cure::~Cure()
{
    std::cout << "Cure " << this->type <<" Destructor called" << std::endl;
}