/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 09:38:02 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/15 11:10:41 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    private:
        const std::string Target;
    public:
        ShrubberyCreationForm(std::string _Target);
        ShrubberyCreationForm(ShrubberyCreationForm &copy);
        ShrubberyCreationForm& operator=(ShrubberyCreationForm &assing);
        ~ShrubberyCreationForm();
        void execute(Bureaucrat const & executor) const;

};


#endif