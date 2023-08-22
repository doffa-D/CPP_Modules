/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 10:44:33 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/22 18:15:06 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc,char **argv) 
{
    if(argc != 2)
    {
        std::cout << "Usage: ./Conversion ..." << std::endl;
        return 1;
    }
    if(ScalarConverter::convert(argv[1]) == false)
        return 1;
    
    return 0;
}
