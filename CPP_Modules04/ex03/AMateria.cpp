/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:19:51 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/03 16:05:08 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : type("")
{
    std::cout << "AMateria "<< this->type << " default Constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type)
{
    this->type = type;
    std::cout << "AMateria "<< this->type << " Constructor called" << std::endl;
}
AMateria::AMateria(const AMateria &copy)
{
    *this = copy;
    std::cout << "AMateria "<< this->type << " Copy Constructor called" << std::endl;
}

AMateria & AMateria::operator=(const AMateria&assign)
{
    if(this != &assign)
    {
        this->type = assign.type;
    }
    std::cout << "AMateria assign "<< this->type << " operator called" << std::endl;
    return *this;
}

std::string const & AMateria::getType() const
{
    std::cout << "AMateria "<< this->type << " getType called" <<std::endl;
    return this->type;
}

AMateria::~AMateria()
{
    std::cout << "AMateria "<< this->type << " Destructor called" << std::endl;
}