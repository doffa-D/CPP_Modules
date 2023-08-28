/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 10:44:33 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/23 19:31:21 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() 
{
    Data Original(1,588.6);

    uintptr_t cast =  Serializer::serialize(&Original);

    Data *cast2 = Serializer::deserialize(cast);

    if(Original._float == cast2->_float && Original._int == cast2->_int)
    {
        std::cout << "Good" << std::endl;
    }
    else
        std::cout << "Not Good" << std::endl;

    return 0;
}
