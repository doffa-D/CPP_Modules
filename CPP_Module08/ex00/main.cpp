/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 13:30:39 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/27 17:26:57 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int> array;
    array.push_back(40);
    array.push_back(20);
    array.push_back(10);
    array.push_back(30);

    try
    {
        easyfind(array,30);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

}