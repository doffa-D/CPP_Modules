/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 13:56:31 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/09/03 20:59:00 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Usage ./RPN \"Expression\"" << std::endl;
        return EXIT_FAILURE;
    }
    try
    {
        RPN C;
        C.calculator(argv[1]);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return EXIT_SUCCESS;
}
