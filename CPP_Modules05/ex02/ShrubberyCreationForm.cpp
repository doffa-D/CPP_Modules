/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 09:45:55 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/15 12:59:18 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>
ShrubberyCreationForm::ShrubberyCreationForm(std::string _Target) : AForm("Shrubbery Creation Form",145,137),Target(_Target)
{
    
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &copy)
{
    *this = copy;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm &assing)
{
    (void)assing;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    
}
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if(this->getSign() == true)
    {
        if(getGradeToExecute() >= executor.getGrade())
        {
            std::ofstream output(Target + "_shrubbery");
            output << "                      ___" << std::endl;
            output << "                _,-'\"\"   \"\"\"\"`--." << std::endl;
            output << "             ,-'          __,,-- \\" << std::endl;
            output << "           ,\'    __,--\"\"\"\"dF      )" << std::endl;
            output << "          /   .-\"Hb_,--\"\"dF      /" << std::endl;
            output << "        ,\'       _Hb ___dF\"-._,-'" << std::endl;
            output << "      ,'      _,-\"\"\"\"   \"\"--..__" << std::endl;
            output << "     (     ,-'                  `." << std::endl;
            output << "      `._,'     _   _             ;" << std::endl;
            output << "       ,'     ,' `-'Hb-.___..._,-'" << std::endl;
            output << "       \\    ,'\"Hb.-\'HH`-.dHF\"" << std::endl;
            output << "        `--\'   \"Hb  HH  dF\"" << std::endl;
            output << "                \"Hb HH dF" << std::endl;
            output << "                 \"HbHHdF" << std::endl;
            output << "                  |HHHF" << std::endl;
            output << "                  |HHH|" << std::endl;
            output << "                  |HHH|" << std::endl;
            output << "                  |HHH|" << std::endl;
            output << "                  |HHH|" << std::endl;
            output << "                  dHHHb" << std::endl;
            output << "                .dFd|bHb.               o" << std::endl;
            output << "      o       .dHFdH|HbTHb.          o /" << std::endl;
            output << "\\  Y  |  \\__,dHHFdHH|HHhoHHb.__Krogg  Y" << std::endl;
            output << "##########################################" << std::endl;
            output.close();

        }
        else
            throw(AForm::GradeTooLowException());
    }
    else
        throw(AForm::GradeTooLowException());
}
