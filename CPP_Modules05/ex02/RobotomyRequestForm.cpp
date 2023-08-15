/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 11:18:50 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/15 12:06:59 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <time.h>

RobotomyRequestForm::RobotomyRequestForm(std::string _Target): AForm("Robotomy Request Form",72,45),Target(_Target)
{

}


RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &copy)
{
    *this = copy;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm &assing)
{
    (void)assing;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    
}
void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{

    if(this->getSign() == true)
    {
        if(getGradeToExecute() >= executor.getGrade())
        {
            srand(time(0));
            if(rand() % 2 == 0)
            {
                std::cout << this->Target <<" has been robotomized successfully " << std::endl;
            }
            else
            {
                std::cout << "robotomy failed." << std::endl;
            }
        }
        else
            throw(AForm::GradeTooLowException());
    }
    else
        throw(AForm::GradeTooLowException());
}
