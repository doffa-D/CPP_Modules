/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 14:32:46 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/16 14:39:26 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm():AForm("Presidential Pardon",25,5),_Target("default")
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string Target):AForm("Presidential Pardon",25,5),_Target(Target)
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{
    
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm&copy)
{
    *this = copy;
}
void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if(this->get_Sing() == true && executor.getGrade() >= this->_GridToExecute)
    {
        std::cout << this->_Target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
    }
    else
        throw(PresidentialPardonForm::GradeNotSingException());
}

PresidentialPardonForm& PresidentialPardonForm::operator==(PresidentialPardonForm& assing)
{
    if(this != &assing)
    {
        this->_Target = assing._Target;
    }
    return *this;
}
