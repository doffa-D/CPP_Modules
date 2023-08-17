/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Read.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 17:30:32 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/07/29 10:54:51 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Read.hpp"

Read::Read(std::string file_name)
{
	this->input_file = file_name;
	this->output_file = file_name + ".replace";
}

Read::~Read()
{
	
}

void    Read::Reaplace(std::string finde,std::string reaplace)
{
	std::ifstream infile(this->input_file);
	if(infile)
	{
		std::ofstream oufile(this->output_file);
		std::string input;
		if(std::getline(infile,input,'\0'))
		{
			size_t		index = input.find(finde);
			while(index != std::string::npos)
			{
				input.erase(index,finde.length());
				input.insert(index,reaplace);
				index = input.find(finde);
			}
		}
		oufile << input;
		oufile.close();
		infile.close();
	}
	else
		std::cout << "Unable to open the file." << std::endl;
}