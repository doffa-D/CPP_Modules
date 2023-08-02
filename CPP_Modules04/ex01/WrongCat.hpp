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
        void makeSound()const ;

};

#endif // WrongCat_HPP
