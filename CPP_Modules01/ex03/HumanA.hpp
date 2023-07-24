/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:09:33 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/07/23 15:56:05 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
    private:
        std::string name_;
        Weapon &Weapon_;
    public:
        HumanA(std::string name,Weapon &weapon);
        ~HumanA();
        void attack();
};

#endif // HUMANA_HPP
