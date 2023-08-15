/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:13:20 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/14 11:42:02 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat a("me",150);
        std::cout << a << std::endl;
        a.decrement();
    }
    catch (Bureaucrat::GradeTooHighException & e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "hello " << std::endl;
}