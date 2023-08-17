/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 14:32:46 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/16 14:39:26 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <ctime>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm():AForm("Roboto my Request",72,45),_Target("default")
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string Target):AForm("Roboto my Request",72,45),_Target(Target)
{
    
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm&copy)
{
    *this = copy;
}
void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if(this->get_Sing() == true && executor.getGrade() >= this->_GridToExecute)
    {
        std::srand(std::time(NULL));
        if(rand() % 2 == 0)
        {
            std::cout << "robotomized successfully " << std::endl;
        }
        else
        {
            std::cout << "the robotomy failed." << std::endl;
        }
    }
    else
        throw(RobotomyRequestForm::GradeNotSingException());
}

RobotomyRequestForm& RobotomyRequestForm::operator==(RobotomyRequestForm& assing)
{
    if(this != &assing)
    {
        this->_Target = assing._Target;
    }
    return *this;
}
