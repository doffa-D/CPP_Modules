/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 11:25:45 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/17 12:08:13 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Intern_hpp
#define Intern_hpp
#include <iostream>
#include "AForm.hpp"

class Intern
{
    public:
        Intern();
        ~Intern();
        Intern(Intern&copy);
        Intern& operator=(Intern &assing);
        AForm *makeForm(std::string name,std::string Target);
};
#endif