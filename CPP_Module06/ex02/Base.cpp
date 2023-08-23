/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 20:50:23 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/23 11:19:39 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::Base()
{
}


Base::~Base()
{
}

Base * Base::generate(void)
{
    srand(time(0));
    int index =  rand() % 3;
    if(index == 0)
    {
        std::cout << "A" << std::endl;
        
        return new A;
    }
    else if(index == 1)
    {
        std::cout << "B" << std::endl;
        return new B;
    }
        std::cout << "C" << std::endl;
    return new C;
}
void Base::identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}

void Base::identify(Base& p)
{
    if (dynamic_cast<A*>(&p))
        std::cout << "A" << std::endl;
    if (dynamic_cast<B*>(&p))
        std::cout << "B" << std::endl;
    if (dynamic_cast<C*>(&p))
        std::cout << "C" << std::endl;

}