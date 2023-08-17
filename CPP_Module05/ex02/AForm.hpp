/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 11:30:20 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/16 13:21:07 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_hpp
#define AForm_hpp
#include <iostream>
class Bureaucrat;
class AForm
{
    protected:
        const std::string _Name;
        const int _GridToSing;
        const int _GridToExecute;
        bool    _Sing;
    public:
        AForm();
        AForm(std::string name,int _GridToSing,int _GridToExecute);
        ~AForm();
        AForm &operator=(AForm&assing);
        AForm(AForm&copy);
        int get_GridToSing() const;
        int get_GridToExecute() const;
        bool get_Sing() const ;
        std::string get_Name() const;
        void beSigned(Bureaucrat&Bureaucrat);
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
        class GradeNotSingException : public std::exception
        {
            public:
                const char *what() const throw()
                {
                    return ("Grade Not Sing");
                }
        };

};
std::ostream &operator<<(std::ostream &out,AForm&Aform);
#endif