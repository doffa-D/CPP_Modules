/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 12:19:18 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/14 16:01:11 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name("default") , _GradeToSign(100),_GradeToExecute(50)
{
    this->Sign = false; 
}

Form::Form(std::string name,int GradeToSign,int GradeToExecute) : _name(name) , _GradeToSign(GradeToSign),_GradeToExecute(GradeToExecute)
{
    this->Sign = false;    
    if(GradeToSign < 1)
        throw Form::GradeTooHighException();
    else if(GradeToSign > 150)
        throw Form::GradeTooLowException();
}

Form &Form::operator=(const Form &assing)
{
    if(this != &assing)
    {
        this->Sign = assing.Sign;
    }
    return *this;
}

Form::Form(Form &copy) : _name(copy._name),_GradeToSign(copy._GradeToSign),_GradeToExecute(copy._GradeToExecute)
{
    this->Sign = copy.Sign;
}

std::string Form::getName() const
{
    return this->_name;
}

int Form::getGradeToSign() const
{
    return this->_GradeToSign;
}

int Form::getGradeToExecute() const
{
    return this->_GradeToExecute;
}

bool Form::getSign() const
{
    return this->Sign;
}

void Form::beSigned(Bureaucrat &b)
{
    if(b.getGrade() > this->_GradeToSign)
        throw Form::GradeTooLowException();
    this->Sign = true;
}


std::ostream &operator<<(std::ostream& out, const Form& instance)
{
    out << "Name : " << instance.getName() << std::endl << "Grade To Sign : " << instance.getGradeToSign() << std::endl <<  "Grade To Execute : " << instance.getGradeToExecute() << std::endl <<  "Sign : "<< instance.getSign() << std::endl;
    return out;
}

Form::~Form()
{

}