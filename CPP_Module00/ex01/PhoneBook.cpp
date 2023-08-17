/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:45:09 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/07/21 16:12:25 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->num_Contact = 0;
}

PhoneBook::~PhoneBook()
{

}

std::string getInput(std::string prompt) 
{
	std::string input;
	do 
	{
		std::cout << prompt;
		std::getline(std::cin, input);
		if(std::cin.eof())
			exit(0);
	} while (input.empty());

	return input;
}

int mini_check(std::string input)
{
	for(int i = 0;input[i];i++)
	{
		if(!std::isdigit(input[i]) || input.size() != 1)
			return -1;
	}
	return input[0] - '0';
}
void    PhoneBook::addContact()
{
	static int i;
	this->Contacts[i % MAX_CONTACT].SetContact(getInput("Enter first name : "),0);
	this->Contacts[i % MAX_CONTACT].SetContact(getInput("Enter last name : "),1);
	this->Contacts[i % MAX_CONTACT].SetContact(getInput("Enter nick name : "),2);
	this->Contacts[i % MAX_CONTACT].SetContact(getInput("Enter Phone number : "),3);
	this->Contacts[i % MAX_CONTACT].SetContact(getInput("Enter darkset secret : "),4);
	if(this->num_Contact != MAX_CONTACT)
		this->num_Contact++;
	i++;
}

int my_atoi(std::string prompt,int num)
{
	std::cout << std::endl;
	std::string input;
	int index;
	do
	{
		std::cout << prompt;
		std::getline(std::cin,input);
		if(std::cin.eof())
			exit(0);
		index = mini_check(input);
		if(input.empty() || index == -1  || index >= num)
		{
			if(!input.empty())
				std::cout <<  "Please enter valid index "<< std::endl;
		}
		
	} while (input.empty() || index == -1 || index >= num);
	
	return index;
}

void PhoneBook::Search_Contact()
{
	if(this->num_Contact == 0)
	{
		std::cout << "Please add some contacts" << std::endl;
		return ;
	}
	int index;
	std::string input;
	std::cout << std::setw(10) << "+------------------\033[0;35mContact\033[0;37m-----------------+\n" <<
	std::setw(10) << "Index" << "|" <<
	std::setw(10) << "First name" << "|" <<
	std::setw(10) << "Last name" << "|" <<
	std::setw(10) << "Nick name" << "|" <<
	std::setw(10) << "\n+---------|----------|----------|----------|" << std::endl;
	for(int i = 0;i < this->num_Contact;i++)
	{
		std::cout << std::setw(10) << i << "|";
		this->Contacts[i].print_input(0);
	}
	index = my_atoi("Please enter the contact index: ",this->num_Contact);
	this->Contacts[index].print_input(1);

}

