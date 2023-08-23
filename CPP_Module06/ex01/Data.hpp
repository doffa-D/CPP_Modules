/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 20:04:13 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/22 20:08:24 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DTATA_HPP
#define DTATA_HPP

struct Data
{
    int _int;
    float _float;
    Data(int value,float value2) : _int(value),_float(value2)
    {}
};

#endif