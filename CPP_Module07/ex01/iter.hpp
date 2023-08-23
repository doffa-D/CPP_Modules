/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 17:11:19 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/23 17:35:33 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>


template <typename T>
void Display(T &print)
{
    std::cout << print << std::endl;
}

template <typename T>
void iter(T *arry,size_t size,void(*founc)(T &))
{
    if(arry == NULL || size == 0)
        return ;
    for(size_t i = 0;i < size;i++)
        founc(arry[i]);
}

#endif