/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 09:39:08 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/22 17:24:31 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <iostream>
#include <sstream>
#include <iomanip> 
#include <limits.h>

class ScalarConverter 
{
    private:
        static int intCast;
        static char charCast;
        static float floatCast;
        static double doubleCast;

        static std::string Input;

        static bool TypeInt;
        static bool TypeChar;
        static bool TypeFloat;
        static bool TypeDouble;
        ScalarConverter();
    public:
        ~ScalarConverter();
        ScalarConverter(const ScalarConverter &copy);
        ScalarConverter & operator=(const ScalarConverter &assign);

        static bool convert(const std::string& iput);
        static void getType(const std::string& input);
        static void PrintInt();
        static void PrintChar();
        static void PrintDoubleAndFloat();
        static bool Check_error();
        static bool Check_max();
        static bool Check_inf();
};

#endif // ScalarConverter_HPP
