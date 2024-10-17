/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakagawashinta <nakagawashinta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 23:39:42 by nakagawashi       #+#    #+#             */
/*   Updated: 2024/10/12 15:33:13 by nakagawashi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

int	main(void)
{
	PhoneBook	phonebook;
	std::string	input = "";

	std::cout << "Please enter the command." << std::endl;
	while (input.compare("EXIT"))
	{
		std::cout << ">" << std::flush;
		std::cin >> input;
		if (input.compare("ADD") == 0)
			phonebook.AddContact();
		else if (input.compare("SERACH") == 0)
			;
		else
			phonebook.ExplainCmds();
		
	}

}