/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 11:49:49 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/10 11:52:39 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"

class Cure : public AMateria
{    
    public:
        Cure();
        ~Cure();
        Cure &operator=(const Cure &assing);
        AMateria* clone() const;
        Cure(const Cure&copy);
        void use(ICharacter& target);
};

#endif