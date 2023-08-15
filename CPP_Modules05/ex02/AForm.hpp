/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 12:02:55 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/14 16:02:11 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <string.h>
#include "Bureaucrat.hpp"


class Form
{
    private:
        const std::string _name;
        const int _GradeToSign;
        const int _GradeToExecute;
        bool Sign;
    public:
        Form();
        ~Form();
        Form(Form &copy);
        Form(std::string name,int GradeToSign,int GradeToExecute);
        void beSigned(Bureaucrat &b);
        Form &operator=(const Form &assing);
        std::string getName() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
        bool getSign() const;
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
std::ostream &operator<<(std::ostream& out, const Form& instance);

#endif