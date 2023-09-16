/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:50:56 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/09/16 20:00:02 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc,char **argv)
{
    if(argc != 2)
    {
        std::cout << "Error: could not open file." << std::endl;
        return EXIT_FAILURE;
    }
    try
    {
        BitcoinExchange File;
        File.ReadData();
        File.ReadFile(argv[1]);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return EXIT_SUCCESS;
}