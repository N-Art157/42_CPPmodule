/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakagawashinta <nakagawashinta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 23:39:38 by nakagawashi       #+#    #+#             */
/*   Updated: 2025/03/28 18:34:40 by nakagawashi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook(void)
{
}

PhoneBook::~PhoneBook(void)
{
}

void	PhoneBook::ExplainCmds(void)
{
	std::cout << "This command is invalid." << std::endl;
	std::cout << "======== Commands: ========" << std::endl;
	std::cout << "ADD: Add a new contact." << std::endl;
	std::cout << "SEARCH: Search for a contact." << std::endl;
	std::cout << "EXIT: Exit the phone book." << std::endl;
}

void	PhoneBook::AddContact(void)
{
	static int	i;

	this->contacts_[i % 8].Init();
	this->contacts_[i % 8].setIndex(i % 8);
	i++;
}

void	PhoneBook::SearchContact(void)
{
	for (int i = 0; i < 8; i++)
	{
		this->contacts_[i].DisplayCollum();
	}
	std::cout << "Please enter the index." << std::endl;
	std::cout << ">" << std::flush;
	std::string	input;
	std::cin >> input;
	if (std::cin.eof())
	{
		std::cout << "\nInput canceled. Exiting program." << std::endl;
		exit(0);
	}
	while (input.length() != 1 || input[0] < '0' || input[0] > '7')
	{
		std::cout << "Invalid index." << std::endl;
		std::cout << ">" << std::flush;
		std::cin >> input;
	}	
	int	index = input[0] - '0';
	this->contacts_[index].DisplayALL();
}	
