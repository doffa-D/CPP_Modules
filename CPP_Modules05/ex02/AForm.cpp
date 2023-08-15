/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 12:19:18 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/14 16:01:11 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): _name("default") , _GradeToSign(100),_GradeToExecute(50)
{
    this->Sign = false; 
}

AForm::AForm(std::string name,int GradeToSign,int GradeToExecute) : _name(name) , _GradeToSign(GradeToSign),_GradeToExecute(GradeToExecute)
{
    this->Sign = false;    
    if(GradeToSign < 1)
        throw AForm::GradeTooHighException();
    else if(GradeToSign > 150)
        throw AForm::GradeTooLowException();
}

AForm &AForm::operator=(const AForm &assing)
{
    if(this != &assing)
    {
        this->Sign = assing.Sign;
    }
    return *this;
}

AForm::AForm(AForm &copy) : _name(copy._name),_GradeToSign(copy._GradeToSign),_GradeToExecute(copy._GradeToExecute)
{
    this->Sign = copy.Sign;
}

std::string AForm::getName() const
{
    return this->_name;
}

int AForm::getGradeToSign() const
{
    return this->_GradeToSign;
}

int AForm::getGradeToExecute() const
{
    return this->_GradeToExecute;
}

bool AForm::getSign() const
{
    return this->Sign;
}

void AForm::beSigned(Bureaucrat &b)
{
    if(b.getGrade() > this->_GradeToSign)
        throw AForm::GradeTooLowException();
    this->Sign = true;
}


std::ostream &operator<<(std::ostream& out, const AForm& instance)
{
    out << "Name : " << instance.getName() << std::endl << "Grade To Sign : " << instance.getGradeToSign() << std::endl <<  "Grade To Execute : " << instance.getGradeToExecute() << std::endl <<  "Sign : "<< instance.getSign() << std::endl;
    return out;
}

AForm::~AForm()
{

}