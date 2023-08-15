/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 11:15:26 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/15 11:17:47 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{

    private:
        const std::string Target;
    public:
        RobotomyRequestForm(std::string _Target);
        RobotomyRequestForm(RobotomyRequestForm &copy);
        RobotomyRequestForm& operator=(RobotomyRequestForm &assing);
        ~RobotomyRequestForm();
        void execute(Bureaucrat const & executor) const;
};

#endif