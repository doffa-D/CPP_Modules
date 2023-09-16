/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:51:17 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/09/16 20:01:17 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "BitcoinExchange.hpp"


BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
{
	*this = copy;
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange &assign)
{
    if(this != &assign)
	{
		this->Data = assign.Data;
	}
    return *this;
}


bool BitcoinExchange::ParsserValue(std::string value,std::string ReadLine)
{
	float valuee = strtod(value.c_str(),NULL);
	
	if(value.find_first_not_of("-.0123456789") != std::string::npos)
	{
		std::cout << "Error: bad input => " << ReadLine << std::endl;
		return false;
	}
	if(valuee < 0)
	{
		std::cout << "Error: not a positive number."<< std::endl;
		return false;
	}
	else if(valuee > 1000)
	{
		std::cout << "Error: too large a number."<< std::endl;
		return false;
	}
	return true;
}
bool BitcoinExchange::CheckCurrentTime(int Year,int Month,int Daye)
{

	std::time_t t = std::time(0);
	std::tm *now =  std::localtime(&t);
	if(Year == 0 || Month == 0 || Daye == 0 || Month > 12)
		return false;
	//Check my current year
	if(Year > now->tm_year + 1900)
		return false;
	else if(Year == now->tm_year + 1900)
	{
		if(Month > now->tm_mon + 1)
			return false;
		else if(Month == now->tm_mon + 1)
		{
			if(Daye > now->tm_mday)
				return false;
		}
	}
	//Check invention time btc
	if(Year < 2009)
		return false;
	else if(Year == 2009)
	{
		if(Month < 1)
			return false;
		else if(Month == 1)
		{
			if(Daye < 3)
				return false;
		}
	}
	//Check day off month
	if(Month == 4 || Month ==  6 || Month ==  9 || Month ==  11)
	{
		if(Daye > 31)
			return false;
	}
	else if(Month != 2)
	{
		if(Daye > 30)
			return false;
	}
	else
	{
		if(Daye > 28)
			return false;
	}
	return true;
}

bool BitcoinExchange::ParsserDate(std::string date,std::string ReadLine)
{
	if(std::count(date.begin(),date.end(),'-') != 2)
	{
		std::cout << "Error: bad input => " << ReadLine << std::endl;
		return false;
	}
	else
	{
		size_t Pos1 =  date.find('-');
		std::string Year = date.substr(0,Pos1);
		size_t Pos2 = date.find('-',Pos1 + 1);
		std::string Month = date.substr(Pos1 + 1,Pos2 - Pos1 - 1);
		std::string Day = date.substr(Pos2 + 1);

		int Yearr = strtod(Year.c_str(),NULL);
		int Monthh = strtod(Month.c_str(),NULL);
		int Daye = strtod(Day.c_str(),NULL);
		
		if(CheckCurrentTime(Yearr,Monthh,Daye) == false)
		{
			std::cout << "Error: bad input => " << ReadLine << std::endl;
			return false;
		}
	}
	return true;
}

void BitcoinExchange::ReadFile(std::string arg)
{
    std::ifstream _InputFile(arg);
	if(!_InputFile.is_open())
		throw std::runtime_error("can't open " + arg);
	std::string ReadLine;
	std::string _BackupReadLine;
	std::getline(_InputFile,ReadLine);
	if(ReadLine.compare("date | value") != 0)
        throw std::runtime_error("Error");
	while(std::getline(_InputFile,ReadLine))
	{
		_BackupReadLine = ReadLine;
		ReadLine.erase(std::remove_if(ReadLine.begin(), ReadLine.end(), ::isspace), ReadLine.end());
		size_t Pos = ReadLine.find('|');
		if(Pos != std::string::npos)
		{
			std::string date = ReadLine.substr(0,Pos);
			std::string value = ReadLine.substr(Pos+1);
			if(ParsserValue(value,_BackupReadLine) == true && ParsserDate(date,_BackupReadLine) == true)
			{
				std::map<std::string ,float>::iterator it = Data.find(date);
				float valuee = std::strtod(value.c_str(), NULL);
				if ( it != Data.end()) 
				{
					std::cout << date << " => " << value << " = " << it->second * valuee<< std::endl;
				} 
				else if(it == Data.end())
				{
					std::map<std::string ,float>::iterator lower = Data.lower_bound(date);
					lower--;
					std::cout << date << " => " << value << " = " << lower->second *  valuee << std::endl;
				}
			}
		}
		else if(ReadLine.empty() == 0)
		{
			std::cout <<"Error: bad input => " << ReadLine << std::endl;
		}
	}
	_InputFile.close();
}

void BitcoinExchange::ReadData()
{
    std::ifstream _InputFile("data.csv");
	if(!_InputFile.is_open())
		throw std::runtime_error("can't open data.csv");
	std::string ReadLine;
	while(std::getline(_InputFile,ReadLine))
	{
		size_t Pos = ReadLine.find(',');
		if(Pos != std::string::npos)
		{
			if(ReadLine.substr(Pos + 1).find_first_not_of(".0123456789"))
			{
				std::string date = ReadLine.substr(0,Pos);
				double value = strtod(ReadLine.substr(Pos + 1).c_str(),NULL);
				Data[date] = value;
			}
		}
	}
	_InputFile.close();
}
