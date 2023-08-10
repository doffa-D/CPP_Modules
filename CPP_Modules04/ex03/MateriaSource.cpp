/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 15:58:15 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/10 18:36:44 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    // std::cout << "MateriaSource Constructor Called" << std::endl;
    for(int i = 0;i <4 ;i++)
        this->Materia[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
    // std::cout << "MateriaSource copy Called" << std::endl;
    *this = copy;
}

MateriaSource &MateriaSource::operator=(const MateriaSource&assing)
{
    // std::cout << "MateriaSource operator Called" << std::endl;
    if(this != &assing)
    {
        for(int i = 0;i < 4;i++)
        {
            this->Materia[i] = assing.Materia[i];
        }
    }
    return *this;
}
void MateriaSource::learnMateria(AMateria* m)
{
    for(int i = 0; i < 4; i++)
    {
        if(this->Materia[i] == NULL)
        {
            this->Materia[i] = m->clone();
            return ;
        }
    }

    
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
    for(int i = 0;i < 4;i++)
    {
        if(this->Materia[i] && this->Materia[i]->getType() == type)
            return this->Materia[i]->clone();
    }
    return NULL;
}

MateriaSource::~MateriaSource()
{
    // std::cout << "MateriaSource Deconstructor Called" << std::endl;
    for(int i = 0;i<4;i++)
    {
        if(this->Materia[i])
            delete this->Materia[i];
    }
}
