/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakagawashinta <nakagawashinta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 23:39:42 by nakagawashi       #+#    #+#             */
/*   Updated: 2025/03/28 17:11:31 by nakagawashi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

int	main(void)
{
	PhoneBook	phonebook;
	std::string	input = "";
	
	std::cout << "Please enter the command." << std::endl;
	while (true)
    {
        std::cout << ">" << std::flush;
		std::cin >> input;
        if (std::cin.eof() || input.compare("EXIT") == 0)
        {
            std::cout << "\nExiting program." << std::endl;
            break;
        }
        else if (input.compare("ADD") == 0)
            phonebook.AddContact();
        else if (input.compare("SEARCH") == 0)
            phonebook.SearchContact();
        else
            phonebook.ExplainCmds();
    }
    return (0);
}