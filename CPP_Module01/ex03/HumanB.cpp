/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 16:10:24 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/07/23 16:14:40 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name_(name)
{
    this->Weapon_ = NULL;
}

HumanB::~HumanB()
{

}

void HumanB::attack()
{
    if(this->Weapon_->getType().size() != 0)
        std::cout << this->name_ << "attacks with their" << this->Weapon_->getType() << std::endl;
    else
       std::cout << this->name_ << "doesn't have Weapon to atack" << std::endl;
}

void HumanB::setWeapon(Weapon& Weapon)
{
    this->Weapon_ = &Weapon;
}