/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakagawashinta <nakagawashinta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 17:42:04 by nakagawashi       #+#    #+#             */
/*   Updated: 2025/03/25 20:38:10 by nakagawashi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	std::string	input;	
	Harl		harl;

	std::cout << "Please enter the level of complaint." << std::endl;
	std::cout << "DEBUG, INFO, WARNING, ERROR" << std::endl;
	while (1)
	{
		std::cout << ">" << std::flush;
		std::cin >> input;
		if (std::cin.eof() || input == "EXIT" || input == "exit")
		{
			std::cout << "\nExiting program." << std::endl;
			return (0);
		}
		harl.complain(input);
	}
	
	return (0);
}	