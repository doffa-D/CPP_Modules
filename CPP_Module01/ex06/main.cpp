/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 10:53:54 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/07/29 11:06:12 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc,char **argv)
{
    if(argc != 2)
    {
        std::cout << "Usage ./Harl level " << std::endl;
        return EXIT_FAILURE;
    }
    Harl my_harl;
    my_harl.complain(argv[1]);
    return EXIT_SUCCESS;
}