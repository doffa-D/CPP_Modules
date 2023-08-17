/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 14:28:39 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/16 15:00:03 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RobotomyRequestForm_hpp
#define RobotomyRequestForm_hpp
#include<iostream>
#include "AForm.hpp"
class Bureaucrat;
class RobotomyRequestForm : public AForm
{
    private:
        std::string _Target;
    public:
        RobotomyRequestForm(std::string Target);
        RobotomyRequestForm();
        ~RobotomyRequestForm();
        RobotomyRequestForm(RobotomyRequestForm&copy);
        RobotomyRequestForm& operator==(RobotomyRequestForm& assing);
        void execute(Bureaucrat const & executor) const;
};

#endif
