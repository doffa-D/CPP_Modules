/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 16:58:51 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/03 12:35:14 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "AAnimal.hpp"

class Dog : public AAnimal
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
