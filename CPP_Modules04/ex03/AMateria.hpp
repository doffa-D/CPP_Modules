/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:16:53 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/03 16:12:58 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include "ICharacter.hpp"
#include <iostream>
#include <string>

class AMateria
{
    protected:
        std::string type;
    public:
    AMateria();
    AMateria(std::string const & type);
    AMateria(const AMateria &copy);
    ~AMateria();
    AMateria & operator=(const AMateria &assign);
    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif