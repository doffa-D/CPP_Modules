/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:42:24 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/03 17:29:17 by hdagdagu         ###   ########.fr       */
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
        Ice(const Ice &copy);
        Ice & operator=(const Ice &assing);
        AMateria* clone() const;
        void use(ICharacter& target);

};

#endif // ICE_HPP