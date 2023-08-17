/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 11:25:37 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/17 12:08:34 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
Intern::Intern()
{

}
Intern::~Intern()
{

}
Intern::Intern(Intern &copy)
{
    *this = copy;
}

Intern &Intern::operator=(Intern &assing)
{
    (void)assing;
    return *this;
}

AForm *Intern::makeForm(std::string name,std::string Target)
{
    std::string FormName[] = {"shrubbery creation","robotomy request","presidential pardon"};
    AForm* form[] = {new ShrubberyCreationForm(Target),new RobotomyRequestForm(Target),new PresidentialPardonForm(Target)};

    for(int i = 0 ; i < 4;i++)
    {
        if(name == FormName[i])
        {
            std::cout << "Intern Correct " << name << std::endl;
            return form[i];
        }
    }
    std::cout << "Intern in Correct " << name << std::endl;
    return NULL;
}
