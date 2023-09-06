/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 18:34:28 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/09/06 17:41:12 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include <vector>
#include <cmath>
int main(int argc,char **argv)
{
    (void)argv;
    float size = argc;
    size = roundf((size - 1) / 2);

    std::vector<int> S;
    std::vector<int> Pairs;
    std::vector<std::vector<int> > array(static_cast<int>(size));
    int a = 0;
    for(int i = 1; i < argc;i += 2)
    {
        int value = strtod(argv[i],NULL);
        array[a].push_back(value);
        if(i + 1 < argc)
        {
            int value = strtod(argv[i + 1],NULL);
            array[a].push_back(value);
        }
        a++;
    }
    
    for(size_t i = 0; i < array.size();i++)
    {
        if(array[i].size() == 2)
        {
            if(array[i][0] < array[i][1])
            {
                std::swap(array[i][1],array[i][0]);
            }

        }
    }
    for(size_t i = 0; i < array.size();i++)
    {
        for(size_t a = 0;a < array[i].size();a++)
        {
            std::cout << array[i][a] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << "================" << std::endl;
    for (size_t i = 0; i < array.size(); i++) 
    {
        S.push_back(array[i][0]);
    }
    for (size_t i = 0; i < array.size(); i++) 
    {
        if(array[i][1])
            Pairs.push_back(array[i][1]);
    }

    std::cout << std::endl; 


}