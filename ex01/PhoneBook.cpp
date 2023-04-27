/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:45:09 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/04/27 21:03:05 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



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
		int index_contact;
		Contact Contacts[MAX_CONTACT];
	public:
		friend void print_int(std::string print);
		friend void	init_PhoneBook(PhoneBook *phone);
		friend std::string input();
		friend void	addContact(PhoneBook *phone);
		friend void Search_Contact(PhoneBook *phone);
};

std::string getInput(std::string prompt) 
{
    std::string input;
    do 
	{
        std::cout << prompt;
        std::getline(std::cin, input);
    } while (input.empty());
    return input;
}


void	init_PhoneBook(PhoneBook *phone)
{
	phone->num_contacts = 0;
	phone->index_contact = 0;
}

void	addContact(PhoneBook *phone)
{
	std::string input;
	if(phone->num_contacts == MAX_CONTACT)
	{
		for(int i = 1; i < MAX_CONTACT;i++)
		{
			phone->Contacts[i - 1] = phone->Contacts[i];
		}
		phone->num_contacts--;
	}
	Contact new_contacts;
	new_contacts.first_name = getInput("Enter first name : ");
	new_contacts.last_name = getInput("Enter last name : ");
	new_contacts.nick_name = getInput("Enter nick name : ");
	new_contacts.phone_number = getInput("Enter Phone number : ");
	new_contacts.darkest_secret = getInput("Enter darkset secret : ");
	phone->Contacts[phone->num_contacts] = new_contacts;
	phone->num_contacts++;
}
void Search_Contact(PhoneBook *phone)
{
	cout << setw(10) << "+------------------\033[0;35mContact\033[0;37m-----------------+\n" <<
	setw(10) << "Index" << "|" <<
	setw(10) << "First name" << "|" <<
	setw(10) << "Last name" << "|" <<
	setw(10) << "Nick name" << "|" <<
	setw(10) << "\n+---------|----------|----------|----------|" << endl;
	for(int i = 0; i < phone->num_contacts;i++)
	{
		cout << setw(10) << i << "|" <<
		setw(10) << phone->Contacts[i].first_name << "|" <<
		setw(10) << phone->Contacts[i].last_name << "|" <<
		setw(10) << phone->Contacts[i].nick_name << "|" << endl;
	}
	cout << "\nPlease enter the contact index: ";
	cin >> phone->index_contact;
	if((phone->index_contact < 0 || phone->index_contact >= phone->num_contacts) && !phone->Contacts[0].first_name.empty())
		cout << "Invalid index, " << endl;
	else if(!phone->Contacts[0].first_name.empty())
	{
		cout << "First name: " << phone->Contacts[phone->index_contact].first_name << endl;
		cout << "Last name: " << phone->Contacts[phone->index_contact].last_name << endl;
		cout << "Nick name: " << phone->Contacts[phone->index_contact].nick_name << endl;
		cout << "Phone numder: " << phone->Contacts[phone->index_contact].phone_number << endl;
		cout << "Darkest secret: " << phone->Contacts[phone->index_contact].darkest_secret << endl;
	}
}
    
void 	print_int(std::string print)
{
	int i;
	i = 0;
	do
	{
		cout << print[i];
		if(i + 1 == 10)
			cout << ".";
		i++;

	}
	while(i < 10);
}
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
	Phone.print_int("hello");
	// return 0;
	// do
	// {
	// 	cout << "> ";
	// 	std::getline(std::cin, input);
	// 	if(input == "ADD")
	// 		addContact(&Phone);
	// 	else if(input == "SEARCH")
	// 		Search_Contact(&Phone);
	// }while(!(input == "EXIT"));
	return 0;
}
