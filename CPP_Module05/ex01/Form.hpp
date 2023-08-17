/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 11:30:20 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/16 13:21:07 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Form_hpp
#define Form_hpp
#include <iostream>
class Bureaucrat;
class Form
{
    private:
        const std::string _Name;
        const int _GridToSing;
        const int _GridToExecute;
        bool    _Sing;
    public:
        Form();
        Form(std::string name,int _GridToSing,int _GridToExecute);
        ~Form();
        Form &operator=(Form&assing);
        Form(Form&copy);
        int get_GridToSing();
        int get_GridToExecute();
        bool get_Sing();
        std::string get_Name();
        void beSigned(Bureaucrat&Bureaucrat);
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
std::ostream &operator<<(std::ostream &out,Form&form);
#endif