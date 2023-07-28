/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 10:09:31 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/07/28 14:30:19 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Default Constructors
ClapTrap::ClapTrap() : Name("Default"),HitPoints(10),EnergyPoints(10),AttackDamage(0) 
{

    std::cout << " ClapTrap >> "  << "Default Constructor called" << std::endl;
}

// Constructors
ClapTrap::ClapTrap(std::string Name) : Name(Name),HitPoints(10),EnergyPoints(10),AttackDamage(0) 
{
    std::cout << " ClapTrap >> " << Name << " initialized" << std::endl;
}

// Copy Constructors
ClapTrap::ClapTrap(const ClapTrap &copy)
{
    *this = copy;
    std::cout << " ClapTrap >> " << "Copy Constructor called" << std::endl;
}

// Destructor
ClapTrap::~ClapTrap()
{
    std::cout << " ClapTrap >> " << Name << " Destroyed" << std::endl;
}

// Operators
ClapTrap & ClapTrap::operator=(const ClapTrap &assign)
{
    this->Name = assign.Name;
    this->HitPoints = assign.HitPoints;
    this->EnergyPoints = assign.EnergyPoints;
    this->AttackDamage = assign.AttackDamage;
    return *this;
}


void ClapTrap::attack(const std::string& target)
{
    if(HitPoints <= 0)
        std::cout << " ClapTrap >> " << Name << " have no energy" << std::endl;
    else
    {
        std::cout << " ClapTrap >> " << Name << " Attacks " << target << " , causing " << AttackDamage << " points of damage!" << std::endl;
        EnergyPoints--;
    }
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if(HitPoints <= amount)
        std::cout << " ClapTrap >> " << Name << " is dead" << std::endl;
    else
    {
        std::cout << " ClapTrap >> " << Name << " Take " << amount << " of damage" << std::endl;
        HitPoints -= amount;
    }
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if(EnergyPoints <= amount)
        std::cout << " ClapTrap >> " << Name << " have no energy" << std::endl;
    else
    {
        std::cout << " ClapTrap >> " << Name << " repairs itself for " << amount << " hit Pointe " << std::endl;
        HitPoints += amount;
        EnergyPoints -= 1;
    }
}