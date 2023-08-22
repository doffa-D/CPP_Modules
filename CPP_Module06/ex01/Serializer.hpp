/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:39:05 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/22 18:40:19 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <string>

typedef struct Data
{
    
} Data;

class Serializer 
{
    private:
        Serializer();
    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
        Serializer(const Serializer &copy);
        ~Serializer();
        Serializer & operator=(const Serializer &assign);
};

#endif // Serializer_HPP
