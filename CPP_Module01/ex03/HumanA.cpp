/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:43:36 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/07/23 15:58:53 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name ,Weapon &weapon) : name_(name), Weapon_(weapon)
{
    
}

HumanA::~HumanA()
{

}
void HumanA::attack()
{
    if(this->Weapon_.getType().size() != 0)
        std::cout << this->name_ << "attacks with their" << this->Weapon_.getType() << std::endl;
    else
        std::cout << this->name_ << "doesn't have Weapon to atack" << std::endl;
}