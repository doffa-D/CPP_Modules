/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 18:40:42 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/04 17:15:30 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout << "MateriaSource constructor called" << std::endl;
    for(int i = 0;i<4;i++)
    {
        this->AMateria_[i] = NULL;
    }
}

void MateriaSource::learnMateria(AMateria* m)
{
    for(int i = 0;i <4;i++)
    {
        if(this->AMateria_[i] == NULL)
        {
            this->AMateria_[i] = m;
            std::cout << "learnMateria with " << m->getType() << std::endl;
            return ;
        }
    }
    std::cout << "can't learnMateria " << m->getType() << std::endl;
}

MateriaSource::MateriaSource()
{
    std::cout << "MateriaSource deconstructor called" << std::endl;
}