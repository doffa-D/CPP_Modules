/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 11:27:30 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/10 11:45:42 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"

class Ice : public AMateria
{    
    public:
        Ice();
        ~Ice();
        Ice &operator=(const Ice &assing);
        AMateria* clone() const;
        Ice(const Ice&copy);
        void use(ICharacter& target);
};

#endif