/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 11:22:04 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/15 12:23:20 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string _Target): AForm("Presidential Pardon Form",25,5),Target(_Target)
{

}


PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &copy)
{
    *this = copy;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm &assing)
{
    (void)assing;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    
}
void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if(this->getSign() == true)
    {
        if(getGradeToExecute() >= executor.getGrade())
        {
            std::cout << Target <<" has been pardoned by Zaphod Beeblebrox"<<std::endl;
        }
        else
            throw(AForm::GradeTooLowException());
    }
    else
        throw(AForm::GradeTooLowException());
}
