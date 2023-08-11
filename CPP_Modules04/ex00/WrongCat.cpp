/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 12:11:42 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/11 11:31:24 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << this->type << " Constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << this->type << "WrongCat Destructor called" << std::endl;
}
WrongCat & WrongCat::operator=(WrongCat &assing)
{
    if(this != &assing)
    {
        this->type = assing.type;
    }
    return *this;
}

WrongCat::WrongCat(WrongCat &copy)
{
    *this = copy;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat Sound" << std::endl;
}
