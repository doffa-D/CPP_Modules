/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 20:50:23 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/23 12:58:27 by hdagdagu         ###   ########.fr       */
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

Base * generate(void)
{
    srand(time(0));
    int index =  rand() % 3;
    if(index == 0)
    {
        return new A;
    }
    else if(index == 1)
    {
        return new B;
    }
    return new C;
}
void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}

void identify(Base& p)
{

    try
    {
        A& a = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        (void)a;
    }
    catch(const std::exception& e)
    {
        try
        {
            B& b = dynamic_cast<B&>(p);
            std::cout << "B" << std::endl;
            (void)b;
        }
        catch(const std::exception& e)
        {
            try
            {
                C& c = dynamic_cast<C&>(p);
                std::cout << "C" << std::endl;
                (void)c;
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << std::endl;
            }
        }
    }
}