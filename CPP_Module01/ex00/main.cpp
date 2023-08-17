/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 16:53:12 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/07/22 12:03:37 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    randomChump("ZombieOne");
    Zombie *Heap_Zombie = newZombie("ZombieTwo");
    Heap_Zombie->announce();
    delete Heap_Zombie;
}