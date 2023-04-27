/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 19:56:47 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/04/26 14:29:45 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc,char **argv) 
{
	int i;
	int j;
	i = 1;
	j = 0;
	if(argc > 1)
	{
		while(argv[i])
		{
			j = 0;
			while(argv[i][j])
			{
				char c = argv[i][j];
				if(argv[i][j] >= 'a' && argv[i][j] <= 'z')
				{
					std::cout << char(c - 32);
				}
				else 
					std::cout << c;
				j++;
			}
			if(i < argc - 1)
				std::cout << " ";
			i++;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	return 0;
}
