/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 11:33:06 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/11 11:33:07 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

class WrongCat : public WrongAnimal
{
    private:
    public:
        WrongCat();
        ~WrongCat();
        WrongCat & operator=(WrongCat &assing);
        WrongCat(WrongCat &copy);
        void makeSound()const ;

};

#endif // WrongCat_HPP
