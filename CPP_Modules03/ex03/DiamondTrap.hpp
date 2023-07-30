/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 13:39:04 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/07/30 15:50:45 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap,public ScavTrap
{
    private:
        std::string _name;
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        ~DiamondTrap();
        DiamondTrap(const DiamondTrap &copy);
        DiamondTrap & operator=(const DiamondTrap &assign);
        void attack(const std::string& target);
        void whoAmI(void);
    
};


#endif
