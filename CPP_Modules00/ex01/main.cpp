/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 17:41:53 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/04/30 14:50:51 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"

void	usage()
{
	std::cout << "\n\t📞\033[0;32m Welcome to Your Awesome PhoneBook 📖\n\n" <<
	"\t+---------------USAGE---------------+\n" <<
	"\t| ADD     : To add a contact.       |\n" <<
	"\t| SEARCH  : To search for a contact.|\n" <<
	"\t| EXIT    : to quite the PhoneBook. |\n" <<
	"\t+-----------------------------------+\033[0;37m\n" << std::endl;
}


int main() 
{
	PhoneBook Phone;
	std::string input;
	usage();
	do
	{
		std::cout << "> ";
		std::getline(std::cin, input);
		if(input == "ADD")
			Phone.addContact();
		else if(input == "SEARCH")
			Phone.Search_Contact();
	}while(!(input == "EXIT"));
	return 0;
}