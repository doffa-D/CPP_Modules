/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 08:51:33 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/15 11:21:58 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "AForm.hpp"


class PresidentialPardonForm : public AForm
{

    private:
        const std::string Target;
    public:
        PresidentialPardonForm(std::string _Target);
        PresidentialPardonForm(PresidentialPardonForm &copy);
        PresidentialPardonForm& operator=(PresidentialPardonForm &assing);
        ~PresidentialPardonForm();
        void execute(Bureaucrat const & executor) const;
};


#endif