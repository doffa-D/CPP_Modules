/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:30:57 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/03 18:13:30 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    std::cout << "default Constructor called" << std::endl;
    this->name = "Character";
    for(int i = 0; i< 4;i++)
    {
        this->inventory[i] = NULL;
    }
}
Character::Character(std::string name)
{
    std::cout << "Constructor called" << std::endl;
    this->name = name;
    for(int i = 0; i< 4;i++)
    {
        this->inventory[i] = NULL;
    }
}
std::string const & Character::getName() const
{
    std::cout << "getName called" << std::endl;
    return this->name;
}

void Character::equip(AMateria* m)
{
    for(int i = 0; i < 4;i++)
    {
        if(this->inventory[i] == NULL)
        {
            this->inventory[i] = m;
            std::cout << this->name <<" equipped with " << m->getType() << std::endl;
        }
    }
    std::cout << this->name << " can't equip " << m->getType() << std::endl;
}
void Character::unequip(int idx)
{
    if(idx < 4 && idx > 0)
    {
        this->inventory[idx] = NULL;
        std::cout << this->name <<" unequip "  << std::endl;
    }
    std::cout << this->name << " can't unequip "  << std::endl;
}
void Character::use(int idx, ICharacter& target)
{
    if(idx < 4 && idx > 0)
    {
        std::cout << this->name <<" used "  << std::endl;
        this->inventory[idx]->use(target);
    }
    std::cout << this->name << " can't use "  << std::endl;
    
}
Character::~Character()
{
    std::cout <<" Destructor called" << std::endl;
}