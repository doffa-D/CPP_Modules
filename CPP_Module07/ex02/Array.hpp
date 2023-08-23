/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:08:00 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/23 19:17:59 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

template <typename T>
class Array 
{
    private:
        T *array;
        unisgned int 
    public:
        Array();
        Array(const Array &copy);
        ~Array();
        Array & operator=(const Array &assign);
};

#endif // Array_HPP
