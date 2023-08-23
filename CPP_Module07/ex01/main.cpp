/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 10:44:33 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/23 17:42:02 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main( void ) 
{
    std::cout << "iter_1" << std::endl;
    int a[] = {1,2,3,5};
    iter(a,4,&Display);

    
    std::cout << "iter_2" << std::endl;
    char C[] = {'A','B','C','D'};
    iter(C,4,&Display);

        
    std::cout << "iter_3" << std::endl;
    std::string B[] = {"hello0","hello1","hello2","hello3"};
    iter(B,4,&Display);
    return 0;
}