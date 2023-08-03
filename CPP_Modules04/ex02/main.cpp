/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 10:17:44 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/03 12:42:45 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{

    // std::cout << "------ Animal ------" << std::endl;
    // const Animal* meta = new Animal();
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    // std::cout << j->getType() << " " << std::endl;
    // std::cout << i->getType() << " " << std::endl;
    // std::cout << meta->getType() << " " << std::endl;
    // i->makeSound(); //will output the cat sound!
    // j->makeSound();
    // meta->makeSound();
    // delete i;
    // delete j;
    // delete meta;
    // std::cout << "------ WrongAnimal ------" << std::endl;
    // const WrongAnimal *wrongAnimal = new WrongAnimal();
    // const WrongAnimal *wrongCat = new WrongCat();
    // std::cout << wrongAnimal->getType() << " " << std::endl;
    // std::cout << wrongCat->getType() << " " << std::endl;
    // wrongAnimal->makesound();
    // wrongCat->makesound();
    // delete wrongAnimal;
    // delete wrongCat;
    // std::cout << "------ Brain ------" << std::endl;
    AAnimal *Animal_[4] = {new Dog(),new Dog(),new Cat,new Cat()};
    for(int i = 0; i < 4;i++)
    {
        delete Animal_[i];
    }
    return 0;
}