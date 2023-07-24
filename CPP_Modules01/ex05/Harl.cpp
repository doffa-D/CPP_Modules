/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 10:54:16 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/07/24 11:55:02 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    
}

Harl::~Harl()
{
    
}

void Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::checker(std::string input)
{
    void (Harl::*Ptr_founc[4])(void) = {&Harl::debug,&Harl::info,&Harl::warning,&Harl::error};
    std::string name[] = {"DEBUG","INFO","WARNING","ERROR"};

    int i;
    i = 0;
    while(i < 4 && name[i].compare(input))
    {
        i++;
    }
    if(i < 4)
    {
        (this->*Ptr_founc[i])();
    }

}
