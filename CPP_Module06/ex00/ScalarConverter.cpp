/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 09:39:05 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/22 18:06:28 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScalarConverter.hpp"

std::string ScalarConverter::Input = "";

int ScalarConverter::intCast = 0;
char ScalarConverter::charCast = '\0';
float ScalarConverter::floatCast = 0.0f;
double ScalarConverter::doubleCast = 0.0;

bool ScalarConverter::TypeInt = false;
bool ScalarConverter::TypeChar = false;
bool ScalarConverter::TypeFloat = false;
bool ScalarConverter::TypeDouble = false;

ScalarConverter::ScalarConverter()
{
    // std::cout << "Default Constructor called of ScalarConverter" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
    (void) copy;
    // std::cout << "Copy Constructor called of ScalarConverter" << std::endl;
}

ScalarConverter::~ScalarConverter()
{
    // std::cout << "Destructor called of ScalarConverter" << std::endl;
}

ScalarConverter & ScalarConverter::operator=(const ScalarConverter &assign)
{
    (void) assign;
    return *this;
}

bool ScalarConverter::Check_error()
{
    int i = 1;
    if(Input[0] == '-' || Input[0] == '+')
        i = 2;
    if(!std::isdigit(Input[Input.find('.') + i]) && Input.length() != 1)
    {
        std::cout << "Error: Unknown type" << std::endl;
        return false;
    }
    for(int i = 0;Input[i];i++)
    {
        if(!std::isdigit(Input[i]))
        {
            if(Input[i] != '.' && Input[i] != 'f' && Input[i] != '+' && Input[i] != '-' && Input.length() != 1)
            {
                std::cout << "Error: Unknown type" << std::endl;
                return false;
            }
        }
    }
    if(Input.find('f') != std::string::npos && Input.find('f') != Input.length() - 1)
    {
        std::cout << "Error: Unknown type" << std::endl;
        return false;
    }
    return true;
}

void ScalarConverter::getType(const std::string& input)
{
    if (input.find_first_not_of("0123456789") == std::string::npos)
    {
        TypeInt = true;
    }
    else if (input.length() == 1 && input[0] >= 0 && input[0] <= 127)
    {
        TypeChar = true;
    }
    else
    {
        TypeFloat = true;
        TypeDouble = true;
    }
}

void ScalarConverter::PrintInt()
{
    if((charCast >= 0 && charCast <= 31) || charCast >= 127)
        std::cout << "char   :   Non displayable"<< std::endl;
    else if(static_cast<int>(charCast) > 127 || static_cast<int>(charCast) < 0)
        std::cout << "char   :  Impossible"<< std::endl;
    else
        std::cout << "char   :  '"<< charCast << "'"<< std::endl;
    std::cout << "int    :   " << intCast << std::endl;
    std::cout << "float  :   " << std::fixed << std::setprecision(1) << floatCast << "f" << std::endl;
    std::cout << "double :   " << std::setprecision(1) << doubleCast << std::endl;
}

void ScalarConverter::PrintDoubleAndFloat()
{
    int size;
    if(Input.find('f') == std::string::npos)
        size = Input.length() - Input.find('.') - 1;
    else
        size = Input.length() - Input.find('.') - 2;
    if(size > 4)
        size = 4;
    int x = 0;
    for(int i = Input.find('.') + 1 ;Input[i];i++)
    {
        if(Input[i] != '0')
        {
            x = 1;
            break;
        }
    }
    if(x == 0 || Input.find('.') == std::string::npos)
        size = 1;
    if(size > 4)
        size = 4;
    if((charCast >= 0 && charCast <= 31) || charCast == 127)
        std::cout << "char   :   Non displayable"<< std::endl;
    else if(static_cast<int>(charCast) > 127 || static_cast<int>(charCast) < 0 || Input.length() < 2)
        std::cout << "char   :  Impossible"<< std::endl;
    else 
        std::cout << "char   :  '"<< charCast << "'"<< std::endl;

    
    std::cout << "int    :   " << intCast << std::endl;
    std::cout << "float  :   " << std::fixed << std::setprecision(size) << floatCast << "f" << std::endl;
    std::cout << "double :   " << std::setprecision(size) << doubleCast << std::endl;
}

void ScalarConverter::PrintChar()
{

    std::cout << "char   :  '"<< charCast << "'"<< std::endl;
    std::cout << "int    :   " << intCast << std::endl;
    std::cout << "float  :   " << std::fixed << std::setprecision(1) << floatCast << "f" << std::endl;
    std::cout << "double :   " << std::setprecision(1) << doubleCast << std::endl;
}

bool ScalarConverter::Check_max()
{
    long long value = std::strtod(Input.c_str(), NULL);
    float value_float = std::strtod(Input.c_str(), NULL);
    double value_double = std::strtod(Input.c_str(), NULL);
    int value_char = std::strtod(Input.c_str(), NULL);
    if (value_char > 127 && !TypeChar)
    {
        std::cout << "Char    :  Impossible"<< std::endl;
        std::cout << "int    :  "<< value_char << std::endl;
        std::cout << "float  :   " << std::fixed << std::setprecision(1) <<static_cast<float>(value_float) << "f" << std::endl;
        std::cout << "double :   " << std::setprecision(1) <<static_cast<double>(value_double) << std::endl;
        return false;
    }
    else if ((value > std::numeric_limits<int>::max() || value < std::numeric_limits<int>::min()) && !TypeChar)
    {
        std::cout << "Char    :  Impossible"<< std::endl;
        std::cout << "int    :  Impossible"<< std::endl;
        std::cout << "float  :   " << std::fixed << std::setprecision(1) <<static_cast<float>(value_float) << "f" << std::endl;
        std::cout << "double :   " << std::setprecision(1) <<static_cast<double>(value_double) << std::endl;
        return false;
    }
    else if((value_float > std::numeric_limits<float>::max() || value_float < std::numeric_limits<float>::min()) &&!TypeChar && Input.find('-') == std::string::npos)
    {
        std::cout << "Char    :  Impossible"<< std::endl;
        std::cout << "int    :  Impossible"<< std::endl;
        std::cout << "float    :  Impossible"<< std::endl;
        std::cout << "double :   " << std::setprecision(1) << static_cast<double>(value_double) << std::endl;
        return false;
    }
    return true;
}

bool ScalarConverter::Check_inf()
{
    int i = 1;
    if(Input[0] == '-' || Input[0] == '+')
        i = 2;
    if(!std::isdigit(Input[Input.find('.') + i]) && Input.length() != 1 && !Input.compare("-inf") &&  !Input.compare("+inf") && !Input.compare("nan") && !Input.compare("-inff") && !Input.compare("+inff") && !Input.compare("nanf"))
    {
        std::cout << "Error: Unknown type" << std::endl;
        return false;
    }
    if(!Input.compare("-inf")  || !Input.compare("+inf")   || !Input.compare("nan"))
    {
        std::cout << "Char    :  Impossible"<< std::endl;
        std::cout << "int    :  Impossible"<< std::endl;
        std::cout << "float    :  "<< Input << "f" << std::endl;
        std::cout << "double    :  "<< Input << std::endl;
        return false;
    }
    else if(!Input.compare("-inff") || !Input.compare("+inff") || !Input.compare("nanf"))
    {
        std::cout << "Char    :  Impossible"<< std::endl;
        std::cout << "int    :  Impossible"<< std::endl;
        std::cout << "float    :  "<< Input << std::endl;
        std::cout << "double    :  "<< Input.substr(0,Input.length() - 1) << std::endl;
        return false;
    }
    return true;
}




bool ScalarConverter::convert(const std::string& iput)
{
    ScalarConverter::Input = iput;
    if(ScalarConverter::Check_inf() == false)
        return true;
    if(ScalarConverter::Check_error() == false)
        return false;
    ScalarConverter::getType(iput);
    if(ScalarConverter::Check_max() == false)
        return true;
    if(TypeChar)
    {
        char character = iput[0];
        charCast = static_cast<char>(character);
        intCast = static_cast<int>(character);
        floatCast = static_cast<float>(character);
        doubleCast = static_cast<double>(character);
    }
    else
    {
        double value = std::strtod(iput.c_str(), NULL);
        charCast = static_cast<char>(value);
        intCast = static_cast<int>(value);
        floatCast = static_cast<float>(value);
        doubleCast = value;
    }
    if(TypeInt)
    {
        ScalarConverter::PrintInt();
    }
    else if(TypeFloat || TypeDouble)
    {
        ScalarConverter::PrintDoubleAndFloat();
    }
    else if(TypeChar)
    {
    
        ScalarConverter::PrintChar();
    }
    return true;
}

