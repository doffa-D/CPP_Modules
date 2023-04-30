/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 17:03:59 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/04/30 20:15:22 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie::~Zombie()
{
    std::cout << "Zombie " << this->name << " has been destroyed." << std::endl;
}

void    Zombie::set_name(std::string name)
{
    this->name = name;
}

void    Zombie::announce()
{
    std::cout << this->name << "BraiiiiiiinnnzzzZ..." << std::endl;
}

