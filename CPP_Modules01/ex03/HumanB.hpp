/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:59:06 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/07/23 16:12:57 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB
{
    private:
        std::string name_;
        Weapon *Weapon_;
    public:
        HumanB(std::string name);
        ~HumanB();
        void attack();
        void    setWeapon(Weapon& Weapon);

};

#endif // HUMANB_HPP
