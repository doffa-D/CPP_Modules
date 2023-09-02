/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:51:13 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/09/02 22:09:12 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <ctime>
#include <map>

class BitcoinExchange 
{
    private:
        std::ifstream _InputFile;
        std::map<std::string ,float> Data;
        BitcoinExchange();
    public:
        BitcoinExchange(std::string FileName);
        BitcoinExchange(const BitcoinExchange &copy);
        ~BitcoinExchange();
        BitcoinExchange & operator=(const BitcoinExchange &assign);
        bool ParsserDate(std::string date,std::string ReadLine);
        bool ParsserValue(std::string value,std::string ReadLine);
        bool CheckCurrentTime(int Year,int Month,int Daye);
        void ReadFile();
        void ReadData();

};

#endif // BitcoinExchange_HPP
