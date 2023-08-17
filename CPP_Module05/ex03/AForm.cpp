/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 12:21:17 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/16 13:32:11 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : _Name("default"),_GridToSing(10),_GridToExecute(100)
{
    this->_Sing = false;
}

AForm::AForm(std::string name,int GridToSing,int GridToExecute) : _Name(name),_GridToSing(GridToSing),_GridToExecute(GridToExecute)
{
    this->_Sing = false;
}

AForm::AForm(AForm&copy):_Name(copy._Name),_GridToSing(copy._GridToSing),_GridToExecute(copy._GridToExecute),_Sing(copy._Sing)
{
    
}

AForm::~AForm()
{

}
int AForm::get_GridToSing() const
{
    return this->_GridToSing;
}

int AForm::get_GridToExecute() const
{
    return this->_GridToExecute;
}

bool AForm::get_Sing() const
{
    return this->_Sing;
}

std::string AForm::get_Name() const
{
    return this->_Name;
}

AForm &AForm::operator=(AForm &assing)
{
    if(this != &assing)
    {
        this->_Sing = assing._Sing;
    }
    return *this;
}

void AForm::beSigned(Bureaucrat&Bureaucrat)
{
    if(Bureaucrat.getGrade() >= this->_GridToSing)
    {
        throw AForm::GradeTooLowException();
    }
    else
        this->_Sing = true;
}


std::ostream &operator<<(std::ostream &out,AForm&Aform)
{
    out << "Name : "<<Aform.get_Name()<< std::endl <<"Sing : " << Aform.get_Sing() << std::endl << "GridToSing : " <<Aform.get_GridToSing()<<std::endl << "GridToExecute : " << Aform.get_GridToExecute()<<std::endl;
    return out;
}

