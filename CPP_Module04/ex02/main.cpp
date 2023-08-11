/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 10:17:44 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/11 12:16:40 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{

    AAnimal *Animal_[4] = {new Dog(),new Dog(),new Cat,new Cat()};
    for(int i = 0; i < 4;i++)
    {
        delete Animal_[i];
    }
    return 0;
}