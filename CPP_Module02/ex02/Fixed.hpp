/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 12:24:01 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/02 11:06:33 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed 
{
    private:
        int FixedPointe;
        static const int fractionalBit = 8;
    public:
        Fixed();
        Fixed(const int value);
        Fixed(const float value);
        Fixed(const Fixed &copy);
        ~Fixed();

        Fixed& operator=(const Fixed &assign);
        Fixed operator+(const Fixed &assign);
        Fixed operator-(const Fixed &assign);
        Fixed operator*(const Fixed &assign);
        Fixed operator/(const Fixed &assign);

        bool operator>(const Fixed &assign);
        bool operator<(const Fixed &assign);
        bool operator>=(const Fixed &assign);
        bool operator<=(const Fixed &assign);
        bool operator!=(const Fixed &assign);
        bool operator==(const Fixed &assign);
        
        Fixed& operator--( void );
        Fixed& operator++( void );
        Fixed operator++( int );
        Fixed operator--( int );

        static Fixed& mini(Fixed& Fixed1,Fixed& Fixed2 );
        static const Fixed& mini(const Fixed& Fixed1,const Fixed& Fixed2 );
        static Fixed& max(Fixed& Fixed1,Fixed& Fixed2 );
        static const Fixed& max(const Fixed& Fixed1,const Fixed& Fixed2 );


        int getRawBits( void ) const;
        void setRawBits( int const raw );
        int toInt( void ) const;
        float toFloat( void ) const;
};

std::ostream& operator<<(std::ostream& out, const Fixed &assign);

#endif // Fixed_HPP
