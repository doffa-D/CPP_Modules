/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 20:13:03 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/15 10:07:19 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(const std::string _name,int grade) : name(_name)
{
    if(grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if(grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->grade = grade;
}
Bureaucrat::Bureaucrat() : name("Default"),grade(100)
{

}
void Bureaucrat::decrement()
{
    if(this->grade + 1 > this->grade)
        throw Bureaucrat::GradeTooHighException();
    else
        this->grade++;
}

void Bureaucrat::increment()
{
    if(this->grade - 1 < this->grade)
        throw Bureaucrat::GradeTooHighException();
    else
        this->grade--;
}


Bureaucrat::Bureaucrat(const Bureaucrat&copy)
{
    *this = copy;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &assing)
{
    if(this != &assing)
    {
        this->grade = assing.grade;
    }
    return *this;
}

std::string Bureaucrat::getName() const
{
    return this->name;
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& instance)
{
    out << instance.getName() << ", bureaucrat grade " << instance.getGrade();
    return out;
}
void Bureaucrat::signForm(AForm &Aform)
{
    try
    {
        Aform.beSigned(*this);
        std::cout << *this << " signed " << Aform.getName() << std::endl;
    }
    catch (AForm::GradeTooLowException &e)
    {
        std::cout << *this << "  couldn’t sign " << Aform.getName() << " because " << e.what() << std::endl;
    }
}

int Bureaucrat::getGrade() const
{
    return this->grade;
}

