/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 16:58:51 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/07/31 11:13:23 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include <iostream>
#include <string>

class Dog : public Animal
{
    private:
    public:
        Dog();
        ~Dog();
        void makeSound() const;
};

#endif // Dog_HPP
