/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:45:09 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/04/30 14:50:28 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string PhoneBook::getInput(std::string prompt) 
{
    std::string input;
    do 
	{
        std::cout << prompt;
        std::getline(std::cin, input);
    } while (input.empty());
    return input;
}


// PhoneBook::PhoneBook{};
// {
// 	num_contacts = 0;
// };

void	PhoneBook::addContact()
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
	if(this->num_contacts == MAX_CONTACT)
	{
		this->Contacts[old_num] = new_contacts;
		old_num++;
	}
	else
	{
		this->Contacts[this->num_contacts] = new_contacts;
		this->num_contacts++;
	}
}
    
char *PhoneBook::print_int(std::string print)
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

int PhoneBook::getInput_v2(std::string prompt) 
{
    std::string input;
    do 
	{
        std::cout << prompt;
        std::getline(std::cin, input);
		if((input.empty() || check(input) == 1 || std::stoi(input) < 0 )|| (std::stoi(input) >= this->num_contacts && !this->Contacts[0].first_name.empty()))
			std::cout << "Please enter valid index " << std::endl;
    } while ((input.empty() || check(input) == 1 || std::stoi(input) < 0 )|| (std::stoi(input) >= this->num_contacts && !this->Contacts[0].first_name.empty()));
    return std::stoi(input);
}


void PhoneBook::Search_Contact()
{
	int Index;
	Index = 0;
	std::string index_contact;
	std::cout << std::setw(10) << "+------------------\033[0;35mContact\033[0;37m-----------------+\n" <<
	std::setw(10) << "Index" << "|" <<
	std::setw(10) << "First name" << "|" <<
	std::setw(10) << "Last name" << "|" <<
	std::setw(10) << "Nick name" << "|" <<
	std::setw(10) << "\n+---------|----------|----------|----------|" << std::endl;
	for(int i = 0; i < this->num_contacts;i++)
	{
		std::cout << std::setw(10) << i << "|" <<
		std::setw(10) << print_int(this->Contacts[i].first_name) << "|" <<
		std::setw(10) << print_int(this->Contacts[i].last_name) << "|" <<
		std::setw(10) << print_int(this->Contacts[i].nick_name) << "|" << std::endl;
	}
	Index = getInput_v2("Please enter the contact index: ");
	if(!this->Contacts[0].first_name.empty())
	{
		std::cout << "First name: " << this->Contacts[Index].first_name << std::endl;
		std::cout << "Last name: " << this->Contacts[Index].last_name << std::endl;
		std::cout << "Nick name: " << this->Contacts[Index].nick_name << std::endl;
	}
}

