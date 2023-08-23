/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 20:49:44 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/23 12:28:57 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <string>

class Base 
{
    private:
    public:
        Base();
        virtual ~Base();
};
Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif // Base_HPP
