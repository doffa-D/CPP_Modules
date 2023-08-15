/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 12:02:55 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/15 09:39:35 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP
#include <iostream>
#include <string.h>
#include "Bureaucrat.hpp"


class AForm
{
    private:
        const std::string _name;
        const int _GradeToSign;
        const int _GradeToExecute;
        bool Sign;
    public:
        AForm();
        ~AForm();
        AForm(AForm &copy);
        AForm(std::string name,int GradeToSign,int GradeToExecute);
        void beSigned(Bureaucrat &b);
        AForm &operator=(const AForm &assing);
        std::string getName() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
        bool getSign() const;
        virtual void execute(Bureaucrat const & executor) const = 0;
        class GradeTooHighException : public std::exception
        {            
            public:
                const char *what() const throw()
                {
                    return ("Grade Too High");
                }
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char *what() const throw()
                {
                    return ("Grade Too Low");
                }
        };
};
std::ostream &operator<<(std::ostream& out, const AForm& instance);

#endif