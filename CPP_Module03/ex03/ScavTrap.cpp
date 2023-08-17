/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 12:00:28 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/05 10:45:14 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Default Constructors
ScavTrap::ScavTrap() : ClapTrap()
{
    this->EnergyPoints = 50;
    std::cout << " ScavTrap >> " << "Default Constructor called" << std::endl;
}

// Constructors
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->EnergyPoints = 50;
    std::cout << " ScavTrap >> "  << " Constructor called" << std::endl;
}


ScavTrap::ScavTrap(const ScavTrap &copy)
{
    *this = copy;
    std::cout << " ScavTrap >> "  << "Copy Constructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &assign)
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

void ScavTrap::attack(const std::string& target)
{
    if(this->EnergyPoints <= 0)
        std::cout << " ScavTrap >> " << this->name << " have no energy" << std::endl;
    else
    {
        std::cout << " ScavTrap >> " << this->name << " Attacks " << target << " , causing " << AttackDamage << " points of damage!" << std::endl;
        this->EnergyPoints--;
    }
}

void ScavTrap::guardGate()
{
    std::cout << " ScavTrap >> "  << this->name << " ScavTrap is now in Gate keeper mode" << std::endl;
}

// Destructor
ScavTrap::~ScavTrap()
{
    std::cout << " ScavTrap >> "  << "Destructor called" << std::endl;
}
