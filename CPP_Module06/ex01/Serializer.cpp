/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:39:11 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/22 20:25:05 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Serializer.hpp"

Serializer::Serializer()
{
    std::cout << "Default Constructor called of Serializer" << std::endl;
}

Serializer::Serializer(const Serializer &copy)
{
    (void) copy;
    std::cout << "Copy Constructor called of Serializer" << std::endl;
}

Serializer::~Serializer()
{
    std::cout << "Destructor called of Serializer" << std::endl;
}

Serializer & Serializer::operator=(const Serializer &assign)
{
    (void) assign;
    return *this;
}

uintptr_t Serializer::serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);
}