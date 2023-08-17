/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 14:50:24 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/11 12:11:22 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    for(int i = 0;i <= 100;i++)
    {
        this->ideas[i] = "ideas";
    }
    std::cout << "Brain Default Constructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
    *this  = copy;
    std::cout << "Brain Copy Constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor called" << std::endl;
}

Brain & Brain::operator=(const Brain &assign)
{
    std::cout << "Brain assign called" << std::endl;
    if(this != &assign)
    {
        for(int i = 0;i <= 100;i++)
        {
            this->ideas[i] = assign.ideas[i];
        }
    }
    return *this;
}
