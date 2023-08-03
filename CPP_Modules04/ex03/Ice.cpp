/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:42:09 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/03 17:01:14 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
    this->type = "ice";
    std::cout << "Ice " << this->type <<" default Constructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &assign)
{
    std::cout << "Ice " << this->type <<" assign Operator called" << std::endl;

    if(this != &assign)
    {
        this->type = assign.type;
    }
    return *this;
}

Ice::Ice(const Ice &copy)
{
    *this = copy;
    std::cout << "Ice " << this->type << " Copy Constructer called" << std::endl;
}
AMateria *Ice::clone()const
{
    return (new Ice(*this));
}

void    Ice::use(ICharacter& target)
{
    std::cout << "Ice: " << "* shoots an ice bolt at " << target.getName() << " *";
}

Ice::~Ice()
{
    std::cout << "Ice " << this->type <<" Destructor called" << std::endl;
}