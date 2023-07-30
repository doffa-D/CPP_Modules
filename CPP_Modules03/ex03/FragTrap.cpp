/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 18:31:57 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/07/30 15:41:04 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Default Constructors
FragTrap::FragTrap() : ClapTrap("Default")
{
    Name = "Default";
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
    std::cout << " FragTrap >> " << "Default Constructor called" << std::endl;
}

// Constructors
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    Name = name;
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
    std::cout << " FragTrap >> "  << "Default Constructor called" << std::endl;
}
FragTrap::FragTrap(const FragTrap &copy)
{
    if(this != &copy)
    {
        Name = copy.Name;
        HitPoints = copy.HitPoints;
        EnergyPoints = copy.EnergyPoints;
        AttackDamage = copy.AttackDamage;
    }
    std::cout << " FragTrap >> "  << "Copy Constructor called" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap &assign)
{
    this->Name = assign.Name;
    this->HitPoints = assign.HitPoints;
    this->EnergyPoints = assign.EnergyPoints;
    this->AttackDamage = assign.AttackDamage;
    return *this;
}
// Destructor
FragTrap::~FragTrap()
{
    std::cout << " FragTrap >> "  << "Destructor called" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << " FragTrap >> " << Name << " high Fives" << std::endl;
}