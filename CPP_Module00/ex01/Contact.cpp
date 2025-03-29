/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakagaw <anakagaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 23:39:44 by nakagawashi       #+#    #+#             */
/*   Updated: 2025/03/29 14:41:45 by anakagaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

std::string	Contact::GetInput(std::string str)
{
	std::string	input = "";

	std::cout << str << std::endl;
	while (true)
    {
        std::cout << ">" << std::flush;
        std::getline(std::cin, input);
		if (std::cin.eof())
        {
            std::cout << "\nInput canceled. Exiting program." << std::endl;
            exit(0);
        }
        if (!input.empty() && input.find_first_not_of(" \t") != std::string::npos)
            break;
        std::cout << "Input cannot be empty. Please try again." << std::endl;
    }
	return (input);
}

void	Contact::Init(void)
{
	std::cin.ignore();
	this->first_name_ = GetInput("Please enter the first name.");
	this->last_name_ = GetInput("Please enter the last name.");
	this->nickname_ = GetInput("Please enter the nickname.");
	this->phone_number_ = GetInput("Please enter the phone_number.");
	this->darkest_secret_ = GetInput("Please enter the darkest_secret.");
	std::cout << std::endl;
}

void	Contact::DisplayCollum(void) const
{
	if (this->first_name_.empty())
		return ;
	std::cout << "|";
	std::cout << std::setw(10) << this->index_ << "|";
	std::cout << std::setw(10) << this->GetTenChar(this->first_name_) << "|";
	std::cout << std::setw(10) << this->GetTenChar(this->last_name_) << "|";
	std::cout << std::setw(10) << this->GetTenChar(this->nickname_) << "|";
	std::cout << std::endl;
}

std::string	Contact::GetTenChar(std::string str) const
{
	if (str.length() > 10)
	{
		str.resize(9);
		str += ".";
	}
	return (str);
}

void	Contact::DisplayALL(void)
{
	if (this->first_name_.empty())
	{
		std::cout << "This contact is empty." << std::endl;
		return ;
	}
	std::cout << "|";
	std::cout << std::setw(10) << this->first_name_ << "|";
	std::cout << std::setw(10) << this->last_name_ << "|";
	std::cout << std::setw(10) << this->nickname_ << "|";
	std::cout << std::setw(10) << this->phone_number_ << "|";
	std::cout << std::setw(10) << this->darkest_secret_ << "|";
	std::cout << std::endl;
}

void	Contact::setIndex(int index)
{
	this->index_ = index;
}



