/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:24:20 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/31 16:30:57 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string fileName): _Data_File_Name("data.csv"),inputFile(fileName)
{
    // std::cout << "Default Constructor called of BitcoinExchange" << std::endl;
}


BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
{
    (void) copy;
    // std::cout << "Copy Constructor called of BitcoinExchange" << std::endl;
}

BitcoinExchange::~BitcoinExchange()
{
    // std::cout << "Destructor called of BitcoinExchange" << std::endl;
}

BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange &assign)
{
    (void) assign;
    return *this;
}
void BitcoinExchange::minicheck()
{
    if(!_Data_File_Name.is_open())
        throw std::runtime_error("Error: could not open file.");
    // outFile.open("text.txt");
}
void BitcoinExchange::check_data()
{
    
}

void BitcoinExchange::getData()
{
    minicheck();
    std::string line;
    while (std::getline(_Data_File_Name, line)) 
    {
        std::istringstream ss(line);
        while (std::getline(ss, line))
        {
            size_t commaPos = line.find(',');
            if (commaPos != std::string::npos)
            {
                std::string date = line.substr(0, commaPos);
                if(line.substr(commaPos + 1).find_first_not_of(".0123456789"))
                {
                    float value = std::strtod(line.substr(commaPos + 1).c_str(), NULL);        
                    dataMap.insert(std::make_pair(date, value));      
                }
            }
        }
    }
    // std::map<std::string, double>::iterator it = dataMap.begin(); 
    // for(;it != dataMap.end();it++)
    // {
    //     std::cout << it->first << " " << it->second << "   " << std::endl;
    // }
    _Data_File_Name.close();
    return ;
}

bool isValidString(const std::string& str) 
{
    return str.find_first_not_of(" -0123456789") == std::string::npos;
}

bool BitcoinExchange::parssing(std::string date,std::string value)
{
    std::string Year;
    std::string Month;
    std::string Day;

    std::istringstream ss(date);

    std::getline(ss, Year, '-');
    std::getline(ss, Month, '-');
    std::getline(ss, Day);

    (void)value;
    int a = 0;
    for(int i = 0;date[i] !='\0';i++ )
    {
        if(date[i] == '-')
            a++;
    }
    if(a != 2)
        throw std::runtime_error("error -");
    
    if(!(date.find_first_not_of("-0123456789") == std::string::npos))
    {
        std::cout << "Error: bad input => "<< date << std::endl;
        return false;
    }
    else
    {
        int intYear = std::strtol(Year.c_str(), NULL,10);
        int intMonth = std::strtol(Month.c_str(), NULL,10);
        int intDay = std::strtol(Day.c_str(), NULL,10);

        // std::cout << "===== "<< intMonth << std::endl;
        // int intYear = std::stoi(Year);
        // int intMonth = std::stoi(Month);
        // int intDay = std::stoi(Day);
        if(intDay > 31 || intMonth > 12 || intYear > 2023 || intDay <= 0 || intMonth <= 0 || intYear <= 0)
        {
            std::cout << "Error: bad input => "<< date << std::endl;
            return false;
        }
    }
    if(!(value.find_first_not_of("-.0123456789") == std::string::npos))
    {
        std::cout << "Error: bad input => "<< value << std::endl;
            return false;
    }
    double p = std::strtod(value.c_str(),NULL);
    if(p < 0)
    {
        std::cout << "Error: not a positive number." << std::endl;
            return false;
    }
    else if(p > INT_MAX)
    {
        std::cout << "Error: too large a number." << std::endl;
            return false;
    }
    return true;

}

void BitcoinExchange::getFile()
{
    // minicheck();
    std::string line;
    while (!inputFile.eof()) 
    {
        std::getline(inputFile, line);
        std::istringstream ss(line);
        while (std::getline(ss, line))
        {
            size_t commaPos = line.find('|');
            if (commaPos != std::string::npos)
            {
                std::string date = line.substr(0, commaPos);
                std::string value = line.substr(commaPos + 2);
                date.erase(std::remove_if(date.begin(), date.end(), ::isspace), date.end());
                
                if(parssing(date,value) == true)
                {
                    std::map<std::string ,double>::iterator it = dataMap.find(date);
                    double valuee = std::strtod(value.c_str(), NULL);
                    if ( it != dataMap.end()) 
                    {

                        std::cout << date << " => " << value << " = " << it->second * valuee<< std::endl;
                    } 
                    else if(it == dataMap.end())
                    {
                        std::map<std::string ,double>::iterator lower = dataMap.lower_bound(date);
                        lower--;
                        std::cout << date << " => " << value << " = " << lower->second *  valuee << std::endl;
                    }
                }
            }
            else
            {
                std::cout << "Error: bad input => " << line << std::endl;
            }
        }
    }

    inputFile.close();
    return ;
}

void BitcoinExchange::read_file()
{
    getData();
    getFile();

}
