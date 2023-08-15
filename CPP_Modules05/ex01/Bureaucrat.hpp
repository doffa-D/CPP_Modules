/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 17:06:07 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/14 16:16:48 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <string.h>
#include <iostream>

class Form;
class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat(const std::string _name,int grade);
        Bureaucrat();
        Bureaucrat(const Bureaucrat&copy);
        Bureaucrat &operator=(const Bureaucrat &assing);
        std::string getName() const;
        int getGrade() const;
        void increment();
        void decrement();
        void signForm(Form &form);
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
std::ostream &operator<<(std::ostream& out, const Bureaucrat& instance);

#endif