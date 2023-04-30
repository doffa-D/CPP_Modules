/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 21:05:46 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/04/30 21:24:32 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string stringREF = string;
    std::cout << "string : " << &string << ": " << string <<std::endl;
    std::cout << "stringPTR : " << stringPTR << ": " << *stringPTR <<std::endl;
    std::cout << "stringREF : " << &stringREF << ": " << stringREF <<std::endl;
}