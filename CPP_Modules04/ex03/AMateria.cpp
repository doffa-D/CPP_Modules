/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 10:26:22 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/10 18:15:33 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("Default")
{
    // std::cout << "AMateria default Constacture Called" << std::endl;
}
AMateria::AMateria(std::string const & type) : _type(type)
{
    // std::cout << "AMateria Constacture Called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria&assing)
{
    // std::cout << "AMateria operator Called" << std::endl;
    if(this != &assing)
        this->_type = assing._type;
    return *this;
}

AMateria::AMateria(const AMateria&copy)
{
    // std::cout << "AMateria copy Called" << std::endl;
    *this = copy;
}
std::string const & AMateria::getType() const
{
    // std::cout << "AMateria getType Called" << std::endl;
    return this->_type;
}

void AMateria::use(ICharacter& target)
{
    (void)target;
}

AMateria::~AMateria()
{
    // std::cout << "AMateria deconstructor Called" << std::endl;
}
