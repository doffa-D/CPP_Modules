/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 13:34:29 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/05 10:46:57 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : FragTrap(),ScavTrap()
{
    ClapTrap::name = "Default _clap_name";
    this->name = "Default";
    std::cout << "DiamondTrap >> " << "Default Constructor called" << std::endl;

}

DiamondTrap::DiamondTrap(std::string name) : FragTrap(name),ScavTrap(name)
{
    ClapTrap::name = name + "_clap_name";
    std::cout << "DiamondTrap >> " << "Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
    *this = copy;
    std::cout << "DiamondTrap >> "  << "Copy Constructor called" << std::endl;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap &assign)
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

void DiamondTrap::attack(const std::string& target)
{
    this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "i am a DiamondTrap >> " << this->_name << " ClapTrap name " << this->ClapTrap::name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap >> "  << "Destructor called" << std::endl;
}
