/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:39:11 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/22 18:39:12 by hdagdagu         ###   ########.fr       */
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
