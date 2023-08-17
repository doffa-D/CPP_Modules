/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 09:36:08 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/16 12:18:12 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _Name("default")
{
    this->_Grade = 100;
    if(this->_Grade < 1)
        throw(Bureaucrat::GradeTooHighException());
    else if(this->_Grade > 150)
        throw(Bureaucrat::GradeTooLowException());
}

Bureaucrat::Bureaucrat(std::string name,int grade) : _Name(name)
{
    this->_Grade = grade;
    if(this->_Grade < 1)
        throw(Bureaucrat::GradeTooHighException());
    else if(this->_Grade > 150)
        throw(Bureaucrat::GradeTooLowException());
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &assing)
{
    if(this != &assing)
    {
        this->_Grade = assing._Grade;
    }
    return *this;
}

std::string Bureaucrat::getName()
{
    return this->_Name;
}

int Bureaucrat::getGrade()
{
    return this->_Grade;
}
void Bureaucrat::increment()
{
    if(this->_Grade - 1 < 1)
        throw(Bureaucrat::GradeTooHighException());
    else
        this->_Grade--;
}
void Bureaucrat::decrement()
{
    if(this->_Grade + 1 > 150)
        throw(Bureaucrat::GradeTooLowException());
    else
        this->_Grade++;
}


std::ostream &operator<<(std::ostream &out,Bureaucrat &Bureaucrat)
{
    out << Bureaucrat.getName() <<" bureaucrat grade " << Bureaucrat.getGrade() << std::endl;
    return out;
}

Bureaucrat::~Bureaucrat()
{
    
}