/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 13:30:39 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/09/06 19:40:34 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{

    try
    {
        std::vector<int> array;
        array.push_back(40);
        array.push_back(20);
        array.push_back(10);
        array.push_back(30);
        easyfind(array,30);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

}