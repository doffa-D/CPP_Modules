/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 16:53:12 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/07/29 10:22:20 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    std::string name;
    int N;
    std::cout << "Enter Zombie name : ";
    std::cin >> name;
    std::cout << "Enter Number of Zombie : ";
    std::cin >> N;
    Zombie *zombie = zombieHorde(N,name);
    for(int i = 0;i < N;i++)
    {
        zombie[i].announce();
    }
    delete [] zombie;
}