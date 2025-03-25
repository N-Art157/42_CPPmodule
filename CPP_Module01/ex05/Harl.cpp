/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakagawashinta <nakagawashinta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 16:11:29 by nakagawashi       #+#    #+#             */
/*   Updated: 2025/03/25 20:34:44 by nakagawashi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::complain(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	complainfn complaints[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*complaints[i])();
			return ;
		}
	}
}

void	Harl::debug(void)
{
	std::cout << "DEBUG: This is a debug message." << std::endl;
}

void	Harl::info(void)
{
	std::cout << "INFO: This is an info message." << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "WARNING: This is a warning message." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "ERROR: This is an error message." << std::endl;
}
