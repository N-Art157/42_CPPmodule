/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakagawashinta <nakagawashinta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 23:39:38 by nakagawashi       #+#    #+#             */
/*   Updated: 2024/10/12 15:32:40 by nakagawashi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

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
	i++;
}