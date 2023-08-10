/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 10:13:31 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/10 17:18:25 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <string>
#include <iostream>

class ICharacter;
class AMateria
{
    protected:
        std::string _type;
    public:
        AMateria();
        virtual ~AMateria();
        AMateria(std::string const & type);
        AMateria & operator=(const AMateria& assing);
        AMateria(const AMateria &copy);
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif

