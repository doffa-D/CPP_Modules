/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 13:34:29 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/07/30 15:52:13 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : FragTrap("Default"),ScavTrap("Default")
{
    ClapTrap::Name = "Default _clap_name";
    FragTrap::HitPoints = 100;
    ScavTrap::EnergyPoints = 50;
    FragTrap::AttackDamage = 30;
    std::cout << " DiamondTrap >> " << "Default Constructor called" << std::endl;

}

DiamondTrap::DiamondTrap(std::string name) : FragTrap(name),ScavTrap(name)
{
    ClapTrap::Name = name + "_clap_name";
    FragTrap::HitPoints = 100;
    ScavTrap::EnergyPoints = 50;
    FragTrap::AttackDamage = 30;
    std::cout << " DiamondTrap >> " << "Constructor called" << std::endl;

}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
    if(this != &copy)
    {
        Name = copy.Name;
        HitPoints = copy.HitPoints;
        EnergyPoints = copy.EnergyPoints;
        AttackDamage = copy.AttackDamage;
    }
    std::cout << " DiamondTrap >> "  << "Copy Constructor called" << std::endl;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap &assign)
{
    this->Name = assign.Name;
    this->HitPoints = assign.HitPoints;
    this->EnergyPoints = assign.EnergyPoints;
    this->AttackDamage = assign.AttackDamage;
    return *this;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << " DiamondTrap >> "  << "Destructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "i am a DiamondTrap >> " << this->_name << " ClapTrap name " << ClapTrap::Name << std::endl;
}
