/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 17:03:59 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/04/30 17:04:10 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

void Zombie::announce()
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string n)
{
    this->name = n;
    std::cout << "Zombie object " << this->name << " created" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << this->name << " has been destroyed." << std::endl;
}