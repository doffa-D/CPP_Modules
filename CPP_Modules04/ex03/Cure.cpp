/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 11:48:54 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/11 10:09:42 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "Cure.hpp"

Cure::Cure()
{
    // std::cout << "Cure Default Constructor Called" << std::endl;
    this->_type = "cure";
}

Cure &Cure::operator=(const Cure &assing)
{
    // std::cout << "Cure operator Called" << std::endl;
    if(this != &assing)
        this->_type = assing._type;
    return *this;
}

Cure::Cure(const Cure &copy)
{
    // std::cout << "Cure copy Called" << std::endl;
    *this = copy;
}

AMateria* Cure::clone() const
{
    // std::cout << "Cure clone Called" << std::endl;
    return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals  " << target.getName() << " ’s wounds *"<< std::endl;
}

Cure::~Cure()
{
    // std::cout << "Cure deconstructor Called" << std::endl;
}