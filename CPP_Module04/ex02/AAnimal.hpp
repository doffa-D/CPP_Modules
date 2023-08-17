/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 16:58:47 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/07/31 15:00:55 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP
#include "Brain.hpp"
#include <iostream>
#include <string>

class AAnimal 
{
    protected:
        std::string type;
    public:
        AAnimal();
        AAnimal(std::string type);
        virtual ~AAnimal();
        AAnimal(const AAnimal &copy);
        AAnimal & operator=(const AAnimal &assign);
        std::string getType( void ) const;
        virtual void makeSound(void) const = 0;
};

#endif // AAnimal_HPP
