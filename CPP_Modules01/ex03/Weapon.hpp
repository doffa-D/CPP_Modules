/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 14:57:00 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/07/23 15:01:28 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon 
{
    private:
        std::string type;
    public:
        Weapon(std::string type);
        ~Weapon();
        std::string &getType();
        void    setType(std::string type);

};

#endif // !WEAPON_HPP
