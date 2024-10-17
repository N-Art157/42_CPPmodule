/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakagawashinta <nakagawashinta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 23:39:44 by nakagawashi       #+#    #+#             */
/*   Updated: 2024/10/12 15:40:50 by nakagawashi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

std::string	Contact::GetInput(std::string str)
{
	std::string	input = "";

	std::cout << str << std::endl;
	std::cin >> input;
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


