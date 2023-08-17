/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 14:28:39 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/17 10:03:27 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ShrubberyCreationForm_hpp
#define ShrubberyCreationForm_hpp
#include<iostream>
#include "AForm.hpp"
class Bureaucrat;
class ShrubberyCreationForm : public AForm
{
    private:
        std::string _File;
    public:
        ShrubberyCreationForm(std::string file);
        ShrubberyCreationForm();
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(ShrubberyCreationForm&copy);
        ShrubberyCreationForm& operator==(ShrubberyCreationForm& assing);
        void execute(Bureaucrat const & executor) const;
};

#endif
