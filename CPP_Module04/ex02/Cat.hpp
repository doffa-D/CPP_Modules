/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 16:59:02 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/03 12:35:08 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "AAnimal.hpp"

class Cat : public AAnimal
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
