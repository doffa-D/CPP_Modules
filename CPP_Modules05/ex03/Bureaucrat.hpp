/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 08:57:00 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/17 11:23:16 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Bureaucrat_hpp
#define Bureaucrat_hpp
#include <iostream>
class AForm;
class Bureaucrat
{
	private:
		const std::string _Name;
		int _Grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string name,int grade);
		Bureaucrat(Bureaucrat &copy);
		Bureaucrat &operator=(Bureaucrat&assing);
		~Bureaucrat();
		std::string getName() const ;
		int getGrade() const ;
		void increment();
		void decrement();
		void signForm(AForm&Aform);
		void executeForm(AForm const & form);
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
std::ostream &operator<<(std::ostream &out,Bureaucrat &Aform);
#endif