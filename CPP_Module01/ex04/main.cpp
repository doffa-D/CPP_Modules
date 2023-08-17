/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 17:20:29 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/07/24 10:02:04 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Read.hpp"

int main(int argc,char **argv) 
{
    if(argc != 4)
    {
        std::cout << "Usage ./Sed fileName String1 String2" << std::endl;
        return EXIT_FAILURE;
    }
    Read Manager(argv[1]);
    Manager.Reaplace((std::string)argv[2],(std::string)argv[3]);

    return 0;
}
