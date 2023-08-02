/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:07:58 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/02 10:31:00 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructors
Fixed::Fixed() : FixedPointe(0)
{
    std::cout << "Default Constructor called" << std::endl;
}

// Constructors int
Fixed::Fixed(const int value) : FixedPointe(value << fractionalBit)
{
    std::cout << "int Constructor called" << std::endl;
}

// Constructors float
Fixed::Fixed(const float value) : FixedPointe(std::roundf(value * 256))
{
    std::cout << "float Constructor called" << std::endl;
}

// Copy Constructors
Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy Constructor called" << std::endl;
    this->setRawBits(copy.FixedPointe);
}

// Operators Overloading =
Fixed & Fixed::operator=(const Fixed &assign)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &assign)
        this->FixedPointe = assign.FixedPointe;
    return *this;
}

// Operators Overloading << 
std::ostream& operator<<(std::ostream& out, const Fixed &assign)
{
    out << assign.toFloat();
    return out;
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

// toFloat
float Fixed::toFloat( void ) const
{
    return static_cast<float>(this->FixedPointe) / (1 << fractionalBit);
}

// toFloat
int Fixed::toInt( void ) const
{
    return(this->FixedPointe >> fractionalBit);
}