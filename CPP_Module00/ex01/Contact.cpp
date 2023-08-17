/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 13:22:14 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/07/21 16:14:21 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{

}
Contact::~Contact()
{

}


void Contact::SetContact(std::string input,int i)
{
    if(i == 0)
        this->first_name = input;
    else if(i == 1)
        this->last_name = input;
    else if(i == 2)
        this->nick_name = input;
    else if(i == 3)
        this->phone_number = input;
    else if(i == 4)
        this->darkest_secret = input;
}

char *fix_size(std::string print)
{
    char c = '.';
    static char dst[12];
    int i = 0;
    do
    {
        dst[i] = print[i];
        if(i == 9 && print.size() > 10)
        {
            dst[i] = c;
            dst[i+1] = '\0';
            break;
        }
        i++;
    } while (i < 10);
    return dst;
}
void Contact::print_input(int i)
{
    if(i == 0)
    {
        std::cout << std::setw(10) << fix_size(this->first_name) << "|" <<
        std::setw(10) << fix_size(this->last_name) << "|" <<
        std::setw(10) << fix_size(this->nick_name) << "|" << std::endl;
    }
    else
    {
        std::cout << "First name: " << this->first_name << std::endl;
		std::cout << "Last name: " << this->last_name << std::endl;
		std::cout << "Nick name: " << this->nick_name << std::endl;
		std::cout << "Darkest Secret: " << this->darkest_secret << std::endl;
		std::cout << "Phone Number: " << this->phone_number << std::endl;
    }
}