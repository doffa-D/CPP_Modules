/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 13:37:57 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/27 17:27:06 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <vector>
#include <algorithm>
template <typename T>
void easyfind(T& container, int value) 
{
    if(std::find(container.begin(),container.end(),value) == container.end())
    {
        throw std::runtime_error("cant found the value inc Container");
    }
    else
    {
        std::cout << value << std::endl;
    }
}
#endif // easyfind_HPP
