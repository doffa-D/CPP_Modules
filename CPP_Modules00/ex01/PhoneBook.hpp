/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:55:42 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/04/30 14:50:40 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>

#define MAX_CONTACT 8

class Contact
{
	public:
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string phone_number;
		std::string darkest_secret;
};

class PhoneBook
{
	private:
		int num_contacts;
		Contact Contacts[MAX_CONTACT];
	public:
		PhoneBook()
		{
			num_contacts = 0;
		}
		std::string input();
		std::string getInput(std::string prompt);
		char *print_int(std::string print);
		void	init_PhoneBook();
		void	addContact();
		void Search_Contact();
		int getInput_v2(std::string prompt);
};


#endif 