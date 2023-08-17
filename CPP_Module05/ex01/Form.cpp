/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 12:21:17 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/16 13:32:11 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _Name("default"),_GridToSing(10),_GridToExecute(100)
{
    this->_Sing = false;
}

Form::Form(std::string name,int GridToSing,int GridToExecute) : _Name(name),_GridToSing(GridToSing),_GridToExecute(GridToExecute)
{
    this->_Sing = false;
}

Form::Form(Form&copy):_Name(copy._Name),_GridToSing(copy._GridToSing),_GridToExecute(copy._GridToExecute),_Sing(copy._Sing)
{
    
}

Form::~Form()
{

}
int Form::get_GridToSing()
{
    return this->_GridToSing;
}

int Form::get_GridToExecute()
{
    return this->_GridToExecute;
}

bool Form::get_Sing()
{
    return this->_Sing;
}

std::string Form::get_Name()
{
    return this->_Name;
}

Form &Form::operator=(Form &assing)
{
    if(this != &assing)
    {
        this->_Sing = assing._Sing;
    }
    return *this;
}

void Form::beSigned(Bureaucrat&Bureaucrat)
{
    if(Bureaucrat.getGrade() >= this->_GridToSing)
        throw Form::GradeTooLowException();
    else
        this->_Sing = true;
}


std::ostream &operator<<(std::ostream &out,Form&form)
{
    out << "Name : "<<form.get_Name()<< std::endl <<"Sing : " << form.get_Sing() << std::endl << "GridToSing : " <<form.get_GridToSing()<<std::endl << "GridToExecute : " << form.get_GridToExecute()<<std::endl;
    return out;
}

