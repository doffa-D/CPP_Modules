/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 10:09:31 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/04 14:27:49 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Default Constructors
ClapTrap::ClapTrap()  : name("Default"),HitPoints(10),EnergyPoints(10),AttackDamage(0) 
{
    std::cout << "Default Constructor called" << std::endl;
}

// Constructors
ClapTrap::ClapTrap(std::string Name) : name(Name),HitPoints(10),EnergyPoints(10),AttackDamage(0) 
{
    std::cout << "ClapTrap " << this->name << " initialized" << std::endl;
}

// Copy Constructors
ClapTrap::ClapTrap(const ClapTrap &copy)
{
    *this = copy;
    std::cout << "Copy Constructor called" << std::endl;
}

// Destructor
ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->name << " Destructor called" << std::endl;
}

// Operators
ClapTrap & ClapTrap::operator=(const ClapTrap &assign)
{
    if(this != &assign)
    {
        this->name = assign.name;
        this->HitPoints = assign.HitPoints;
        this->EnergyPoints = assign.EnergyPoints;
        this->AttackDamage = assign.AttackDamage;
    }
    return *this;
}


void ClapTrap::attack(const std::string& target)
{
    if(this->EnergyPoints <= 0)
    {
        std::cout << "ClapTrap " << this->name << " have no energy" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->name << " Attacks " << target << " , causing " << AttackDamage << " points of damage!" << std::endl;
    EnergyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(HitPoints <= amount)
    {
        std::cout << "ClapTrap " << name << " is dead" << std::endl;
        return; 
    }
    std::cout << "ClapTrap " << name << " Take " << amount << " of damage" << std::endl;
    HitPoints -= amount;
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if(EnergyPoints <= amount)
    {
        std::cout << "ClapTrap " << name << " have no energy" << std::endl;
        return ;
    }  
    std::cout << "ClapTrap " << name << " repairs itself for " << amount << " hit Pointe " << std::endl;
    HitPoints += amount;
    EnergyPoints -= 1;    
}
