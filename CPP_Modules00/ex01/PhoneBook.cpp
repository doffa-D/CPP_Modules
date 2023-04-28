/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:45:09 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/04/28 17:43:49 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

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
}

void	addContact(PhoneBook *phone)
{
	std::string input;
	static int old_num;
	Contact new_contacts;
	new_contacts.first_name = getInput("Enter first name : ");
	new_contacts.last_name = getInput("Enter last name : ");
	new_contacts.nick_name = getInput("Enter nick name : ");
	new_contacts.phone_number = getInput("Enter Phone number : ");
	new_contacts.darkest_secret = getInput("Enter darkset secret : ");
	if(old_num == MAX_CONTACT)
		old_num = 0;
	if(phone->num_contacts == MAX_CONTACT)
	{
		phone->Contacts[old_num] = new_contacts;
		old_num++;
	}
	else
	{
		phone->Contacts[phone->num_contacts] = new_contacts;
		phone->num_contacts++;
	}
}
    
char *print_int(std::string print)
{
	char c = '.';
    static char dst[12];
    int i = 0;
    do {
        dst[i] = print[i];
        if (i == 9 && print.size() > 10)
		{
            dst[i] = c;
    		dst[i+1] = '\0';
            break;
        }
        i++;
    } while (i < 10 && print.size());
    return dst;
}

int	check(std::string index)
{
	for(int i = 0; index[i];i++)
	{
		if(!std::isdigit(index[i]))
			return 1;
	}
	return 0;
}

int getInput_v2(std::string prompt,PhoneBook *phone) 
{
    std::string input;
    do 
	{
        std::cout << prompt;
        std::getline(std::cin, input);
		if((input.empty() || check(input) == 1 || std::stoi(input) < 0 )|| (std::stoi(input) >= phone->num_contacts && !phone->Contacts[0].first_name.empty()))
			cout << "Please enter valid index " << endl;
    } while ((input.empty() || check(input) == 1 || std::stoi(input) < 0 )|| (std::stoi(input) >= phone->num_contacts && !phone->Contacts[0].first_name.empty()));
    return std::stoi(input);
}


void Search_Contact(PhoneBook *phone)
{
	int Index;
	Index = 0;
	std::string index_contact;
	cout << setw(10) << "+------------------\033[0;35mContact\033[0;37m-----------------+\n" <<
	setw(10) << "Index" << "|" <<
	setw(10) << "First name" << "|" <<
	setw(10) << "Last name" << "|" <<
	setw(10) << "Nick name" << "|" <<
	setw(10) << "\n+---------|----------|----------|----------|" << endl;
	for(int i = 0; i < phone->num_contacts;i++)
	{
		cout << setw(10) << i << "|" <<
		setw(10) << print_int(phone->Contacts[i].first_name) << "|" <<
		setw(10) << print_int(phone->Contacts[i].last_name) << "|" <<
		setw(10) << print_int(phone->Contacts[i].nick_name) << "|" << endl;
	}
	Index = getInput_v2("Please enter the contact index: ",phone);
	if(!phone->Contacts[0].first_name.empty())
	{
		cout << "First name: " << phone->Contacts[Index].first_name << endl;
		cout << "Last name: " << phone->Contacts[Index].last_name << endl;
		cout << "Nick name: " << phone->Contacts[Index].nick_name << endl;
	}
}

