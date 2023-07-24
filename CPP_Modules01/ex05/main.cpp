/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 10:53:54 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/07/24 12:27:07 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl my_harl;
    my_harl.checker("DEBUG");
    my_harl.checker("INFO");
    my_harl.checker("WARNING");
    my_harl.checker("ERROR");

}