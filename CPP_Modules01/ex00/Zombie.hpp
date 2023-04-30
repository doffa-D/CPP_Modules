/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:55:42 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/04/30 17:04:52 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
// #include <string>


class Zombie
{
    private:
        std::string name;
    public:
        Zombie(std::string n);
        ~Zombie();
        Zombie* newZombie( std::string name );
        void randomChump( std::string name );
        void announce( void );

};


#endif 