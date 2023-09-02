/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:24:16 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/31 15:13:15 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>

class BitcoinExchange 
{
    private:
        std::ofstream outFile;
        std::ifstream _Data_File_Name;
        std::ifstream inputFile;
        std::map<std::string, double> dataMap;
        BitcoinExchange();
    public:
        BitcoinExchange(std::string fileName);
        BitcoinExchange(const BitcoinExchange &copy);
        ~BitcoinExchange();
        BitcoinExchange & operator=(const BitcoinExchange &assign);
        void getFile();
        void getData();
        void minicheck();
        void check_data();
        void check_value();
        void read_file();
        bool parssing(std::string date,std::string value);
        void findDateInMap(const std::string& dateToFind);

};

#endif // BitcoinExchange_HPP
