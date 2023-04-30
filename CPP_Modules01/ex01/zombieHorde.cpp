/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 19:33:06 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/04/30 20:07:23 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int n, std::string name )
{
    Zombie* horde = new Zombie[n];
    for(int i = 0; i < num_zombie ;i++)
    {
        horde[i].set_name(name);
    }
    return horde;
}