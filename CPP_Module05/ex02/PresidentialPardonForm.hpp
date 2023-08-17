/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 14:28:39 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/16 15:00:03 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PresidentialPardonForm_hpp
#define PresidentialPardonForm_hpp
#include "AForm.hpp"
#include<iostream>
class Bureaucrat;
class PresidentialPardonForm : public AForm
{
    private:
        std::string _Target;
    public:
        PresidentialPardonForm(std::string Target);
        PresidentialPardonForm();
        ~PresidentialPardonForm();
        PresidentialPardonForm(PresidentialPardonForm&copy);
        PresidentialPardonForm& operator==(PresidentialPardonForm& assing);
        void execute(Bureaucrat const & executor) const;
};

#endif
