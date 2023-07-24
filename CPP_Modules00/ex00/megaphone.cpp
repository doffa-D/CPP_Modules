/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 10:36:11 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/07/21 16:04:47 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc,char **argv)
{
    int j = 0;
    if(argc > 1)
    {
        for(int i = 1;argv[i];i++)
        {
            j = 0;
            while(argv[i][j])
            {
                char c = argv[i][j];
                if(argv[i][j] >= 'a' && argv[i][j] <= 'z')
                    std::cout << char(std::toupper(argv[i][j]));
                else
                    std::cout << c;
                j++;
            }
        }
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
}