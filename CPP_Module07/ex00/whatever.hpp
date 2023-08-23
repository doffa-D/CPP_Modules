/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 13:38:42 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/23 16:03:43 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>


template <typename T>
void swap(T &a,T&b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
T min(T a,T b)
{
    if(a < b)
        return a;
    else
        return b;
}

template <typename T>
T max(T a,T b)
{
    if(a > b)
        return a;
    else
        return b;
}


#endif