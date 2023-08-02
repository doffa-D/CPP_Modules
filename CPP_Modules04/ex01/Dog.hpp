/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 16:58:51 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/07/31 15:26:01 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog : public Animal
{
    private:
        Brain *Brain_;
    public:
        Dog();
        ~Dog();
        Dog(const Dog &copy);
        Dog & operator=(const Dog &assign);
        void makeSound() const;
};

#endif // Dog_HPP
