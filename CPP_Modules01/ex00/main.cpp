/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 17:41:53 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/04/30 16:58:43 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    std::string name;
    Zombie zombie("James");
    zombie.announce();
    Zombie* zombie_ptr = zombie.newZombie("Alix");
    zombie_ptr->announce();
    delete zombie_ptr;
}
