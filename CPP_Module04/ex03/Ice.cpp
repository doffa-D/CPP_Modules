/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 11:27:08 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/11 10:09:40 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice()
{
    // std::cout << "Ice Default Constructor Called" << std::endl;
    this->_type = "ice";
}

Ice &Ice::operator=(const Ice &assing)
{
    // std::cout << "Ice operator Called" << std::endl;
    if(this != &assing)
        this->_type = assing._type;
    return *this;
}

Ice::Ice(const Ice &copy)
{
    // std::cout << "Ice copy Called" << std::endl;
    *this = copy;
}

AMateria* Ice::clone() const
{
    // std::cout << "Ice clone Called" << std::endl;
    return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
    std::cout << " * shoots an ice bolt at " << target.getName() << " *"<< std::endl;
}

Ice::~Ice()
{
    // std::cout << "Ice Deconstructor Called" << std::endl;
}