/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 16:58:47 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/07/31 11:15:18 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal 
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(std::string type);
        ~Animal();
        Animal(const Animal &copy);
        Animal & operator=(const Animal &assign);
        std::string getType( void ) const;
        virtual void makeSound(void) const;
};

#endif // Animal_HPP
