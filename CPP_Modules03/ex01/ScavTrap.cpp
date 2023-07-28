/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 12:00:28 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/07/28 14:37:16 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Default Constructors
ScavTrap::ScavTrap()
{
    Name = "Default";
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
    std::cout << " ScavTrap >> " << "Default Constructor called" << std::endl;
}

// Constructors
ScavTrap::ScavTrap(std::string name)
{
    Name = name;
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
    std::cout << " ScavTrap >> "  << "Default Constructor called" << std::endl;
}


ScavTrap::ScavTrap(const ScavTrap &copy)
{
    if(this != &copy)
    {
        Name = copy.Name;
        HitPoints = copy.HitPoints;
        EnergyPoints = copy.EnergyPoints;
        AttackDamage = copy.AttackDamage;
    }
    std::cout << " ScavTrap >> "  << "Copy Constructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if(HitPoints <= 0)
        std::cout << " ScavTrap >> " << Name << " have no energy" << std::endl;
    else
    {
        std::cout << " ScavTrap >> " << Name << " Attacks " << target << " , causing " << AttackDamage << " points of damage!" << std::endl;
        EnergyPoints--;
    }
}

void ScavTrap::guardGate()
{
    std::cout << " ScavTrap >> "  << Name << " ScavTrap is now in Gate keeper mode" << std::endl;
}

// Destructor
ScavTrap::~ScavTrap()
{
    std::cout << " ScavTrap >> "  << "Destructor called" << std::endl;
}
