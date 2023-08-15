/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:13:20 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/14 16:48:04 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{

    Bureaucrat _Bureaucrat("you",150);
    std::cout << "----------_Bureaucrat--------"<< std::endl << _Bureaucrat << std::endl;
    Form _Form("me",100,10);
    _Bureaucrat.signForm(_Form);
    std::cout << "----------_Form--------"<< std::endl << _Form << std::endl;

}