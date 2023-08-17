/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 10:09:40 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/07/28 14:37:29 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap boss("JOJO");
    boss.attack("DOFFA");
    boss.takeDamage(5);
    boss.beRepaired(5);
    boss.guardGate();
    return 0;
}