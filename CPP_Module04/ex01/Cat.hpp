/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 16:59:02 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/07/31 15:25:31 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat : public Animal
{
    private:
        Brain *Brain_;
    public:
        Cat();
        ~Cat();
        Cat(const Cat &copy);
        void makeSound() const;
        Cat & operator=(const Cat &assign);
};

#endif // Cat_HPP
