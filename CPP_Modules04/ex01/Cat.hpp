/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 16:59:02 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/07/31 11:13:19 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include <iostream>
#include <string>

class Cat : public Animal
{
    private:
    public:
        Cat();
        ~Cat();
        void makeSound() const;
};

#endif // Cat_HPP
