/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 10:09:21 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/07/30 15:45:54 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap 
{
    protected:
        std::string Name;
        unsigned int HitPoints;
        unsigned int EnergyPoints;
        unsigned int AttackDamage;
    public:
        ClapTrap();
        ClapTrap(std::string Name);
        ClapTrap(const ClapTrap &copy);
        ~ClapTrap();
        ClapTrap & operator=(const ClapTrap &assign);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);


};

#endif // ClapTrap_HPP
