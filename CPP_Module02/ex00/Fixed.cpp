/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:07:58 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/18 12:44:44 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructors
Fixed::Fixed() : FixedPointe(0)
{
    std::cout << "Default Constructor called" << std::endl;
}

// Copy Constructors
Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy Constructor called" << std::endl;
    this->setRawBits(copy.FixedPointe);
}

// Operators Overloading
Fixed & Fixed::operator=(const Fixed &assign)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &assign)
        this->setRawBits(assign.FixedPointe);
    return *this;
}

// Destructor
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

// GetRawBits
int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->FixedPointe;
}

// SetRawBits
void Fixed::setRawBits( int const raw ) 
{
    this->FixedPointe = raw;
}
