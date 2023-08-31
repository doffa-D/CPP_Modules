/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 09:59:58 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/31 10:13:20 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc,char **argv) 
{
    if(argc != 2)
    {
        std::cout << "Error: could not open file." << std::endl;
        return 1;
    }
    try
    {
        BitcoinExchange file(argv[1]);
        file.read_file();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return 1;
    }
    return 0;
}

// #include <iostream>
// #include <string>
// #include <map>

// int main() 
// {
//     std::map<std::string, double> myMap;
//     myMap["apple"] = 10;
//     myMap["banana"] = 5;
//     myMap["2013-06-11"] = 106.1;

//     std::string input = "2013-06-11";

//     if (myMap.find(input) != myMap.end()) 
//     {
//         std::cout << "Key '" << input << "' found in the map. Value: " << myMap[input] << std::endl;
//     }

//     return 0;
// }

