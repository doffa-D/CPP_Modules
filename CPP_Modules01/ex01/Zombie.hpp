/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:55:42 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/04/30 20:15:25 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#define num_zombie 5

#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        ~Zombie();
        void    set_name(std::string name);
        void    announce();
};
Zombie* zombieHorde( int N, std::string name );

#endif 