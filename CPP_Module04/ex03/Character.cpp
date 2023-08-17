/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 11:56:18 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/11 12:33:11 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("Default") 
{
    // std::cout << "Character Constructor Called" << std::endl;
    for(int i = 0;i < 4;i++)
    {
        this->inventory[i] = NULL;
    }
}

Character::Character(std::string name) : _name(name) 
{
    // std::cout << "Character Constructor Called" << std::endl;
    for(int i = 0;i < 4;i++)
    {
        this->inventory[i] = NULL;
    }
}

Character::Character(const Character &copy)
{
    // std::cout << "Character copy Called" << std::endl;
    *this = copy;
}

Character &Character::operator=(const Character &assing)
{
    // std::cout << "Character operator Called" << std::endl;
    if(this != &assing)
    {
        this->_name = assing._name;
        for(int i = 0;i<4;i++)
        {
            this->inventory[i] = assing.inventory[i];
        }
    }
    return *this;
}

std::string const & Character::getName() const
{
    // std::cout << "Character getName Called" << std::endl;
    return this->_name;
}

void Character::equip(AMateria* m)
{
    for(int i = 0;i<4;i++)
    {
        if(m && this->inventory[i] == NULL)
        {
            this->inventory[i] = m->clone();
            delete m;
            return;
        }
    }
    std::cout << "Character " << this->_name << " can't equip " << std::endl;
}

void Character::unequip(int idx)
{
    if(idx >= 0 && idx < 4 && this->inventory[idx])
    {
        delete this->inventory[idx];
        this->inventory[idx] = NULL;
        return ;
    }
    std::cout << "Character " << this->_name <<" can't equipped " << std::endl;
}
void Character::use(int idx, ICharacter& target)
{
    if(idx >= 0 && idx < 4 && this->inventory[idx])
    {
        this->inventory[idx]->use(target);
        return ;
    }
    std::cout << "Character " << this->_name <<" use " << std::endl;
}


Character::~Character()
{
    // std::cout << "Character Deconstructor Called" << std::endl;
    for(int i = 0;i < 4; i++)
    {
        if(this->inventory[i])
        {
            delete this->inventory[i];
        }
    }
}