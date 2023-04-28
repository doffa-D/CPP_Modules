/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:55:42 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/04/28 20:11:28 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>

#define MAX_CONTACT 8
using namespace std;

class Contact
{
	public:
		string first_name;
		string last_name;
		string nick_name;
		string phone_number;
		string darkest_secret;
};

class PhoneBook
{
	private:
		int num_contacts;
		Contact Contacts[MAX_CONTACT];
	public:
		friend char *print_int(std::string print);
		friend void	init_PhoneBook(PhoneBook *phone);
		friend std::string input();
		friend void	addContact(PhoneBook *phone);
		friend void Search_Contact(PhoneBook *phone);
		friend int getInput_v2(std::string prompt,PhoneBook *phone);
};