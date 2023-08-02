/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:07:58 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/02 11:14:18 by hdagdagu         ###   ########.fr       */
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
Fixed::Fixed(const float value) : FixedPointe(std::roundf(value * (1 << fractionalBit)))
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

//------------ Comparison operators: ------------------//
bool Fixed::operator>(const Fixed& assign)
{
    return toFloat() > assign.toFloat();
}
bool Fixed::operator<(const Fixed &assign)
{
    return toFloat() < assign.toFloat();
}
bool Fixed::operator>=(const Fixed &assign)
{
    return toFloat() >= assign.toFloat();
}
bool Fixed::operator<=(const Fixed &assign)
{
    return toFloat() <= assign.toFloat();
}
bool Fixed::operator!=(const Fixed &assign)
{
    return toFloat() != assign.toFloat();
}
//------------------ Arithmetic operators: ------------------//
Fixed Fixed::operator+(const Fixed &assign)
{
    return Fixed(toFloat() + assign.toFloat());
}
Fixed Fixed::operator-(const Fixed &assign)
{
    return Fixed(toFloat() - assign.toFloat());
}
Fixed Fixed::operator*(const Fixed &assign)
{
    return Fixed(toFloat() * assign.toFloat());
}
Fixed Fixed::operator/(const Fixed &assign)
{
    return Fixed(toFloat() / assign.toFloat());
}

//------------------ increment/decrement: ------------------//

Fixed& Fixed::operator--( void )
{
    --this->FixedPointe;
    return *this;
}
Fixed Fixed::operator--( int )
{
    Fixed tmp(*this);
    tmp.FixedPointe = this->FixedPointe--;
    return tmp;
}
Fixed& Fixed::operator++( void )
{
    this->FixedPointe++;
    return *this;
}

Fixed Fixed::operator++( int )
{
    Fixed tmp(*this);
    tmp.FixedPointe = this->FixedPointe++;
    return tmp;
}

//------------------ min/max: ------------------//

Fixed& Fixed::mini(Fixed& Fixed1,Fixed& Fixed2 )
{
    if(Fixed1.FixedPointe < Fixed2.FixedPointe)
        return Fixed1;
    return Fixed2;
}

const Fixed& Fixed::mini(const Fixed& Fixed1,const Fixed& Fixed2 )
{
    if(Fixed1.FixedPointe < Fixed2.FixedPointe)
        return Fixed1;
    return Fixed2;
}

Fixed& Fixed::max(Fixed& Fixed1,Fixed& Fixed2 )
{
    if(Fixed1.FixedPointe > Fixed2.FixedPointe)
        return Fixed1;
    return Fixed2;
}
const Fixed& Fixed::max(const Fixed& Fixed1,const Fixed& Fixed2 )
{
    if(Fixed1.FixedPointe > Fixed2.FixedPointe)
        return Fixed1;
    return Fixed2;
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