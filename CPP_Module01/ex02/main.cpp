/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 16:53:12 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/07/29 10:24:39 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN"; 
    std::string *String_PTR = &str;
    std::string &String_REF = str;
    
    std::cout << str << " : " << &str << std::endl;
    std::cout << *String_PTR << " : " << String_PTR << std::endl;
    std::cout << String_REF << " : " << &String_REF << std::endl;

}
