/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 14:25:41 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/07/22 14:42:29 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{

    Zombie *zombie = new Zombie[N];
    for(int i = 0;i < N ;i++)
    {
        zombie[i].set_name(name);
    }
    return zombie;
}