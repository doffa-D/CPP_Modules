/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 17:41:53 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/04/28 17:43:53 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"

void	usage()
{
	cout << "\n\t📞\033[0;32m Welcome to Your Awesome PhoneBook 📖\n\n" <<
	"\t+---------------USAGE---------------+\n" <<
	"\t| ADD     : To add a contact.       |\n" <<
	"\t| SEARCH  : To search for a contact.|\n" <<
	"\t| EXIT    : to quite the PhoneBook. |\n" <<
	"\t+-----------------------------------+\033[0;37m\n" << endl;
}


int main() 
{
	PhoneBook Phone;
	string input;
	init_PhoneBook(&Phone);
	usage();
	do
	{
		cout << "> ";
		std::getline(std::cin, input);
		if(input == "ADD")
			addContact(&Phone);
		else if(input == "SEARCH")
			Search_Contact(&Phone);
	}while(!(input == "EXIT"));
	return 0;
}