/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:42:24 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/03 18:16:30 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUER_HPP
#define CURE_HPP
#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        ~Cure();
        Cure(const Cure &copy);
        Cure & operator=(const Cure &assing);
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif // Cure_HPP