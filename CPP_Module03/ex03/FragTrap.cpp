/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 18:31:57 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/05 10:45:15 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Default Constructors
FragTrap::FragTrap() : ClapTrap()
{
    HitPoints = 100;
    AttackDamage = 30;
    std::cout << " FragTrap >> " << "Default Constructor called" << std::endl;
}

// Constructors
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    HitPoints = 100;
    AttackDamage = 30;
    std::cout << " FragTrap >> "  << "Default Constructor called" << std::endl;
}
FragTrap::FragTrap(const FragTrap &copy)
{
    *this = copy;
    std::cout << " FragTrap >> "  << "Copy Constructor called" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap &assign)
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
// Destructor
FragTrap::~FragTrap()
{
    std::cout << " FragTrap >> "  << "Destructor called" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << " FragTrap >> " << this->name << " high Fives" << std::endl;
}