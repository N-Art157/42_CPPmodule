/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakagaw <anakagaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 16:11:29 by nakagawashi       #+#    #+#             */
/*   Updated: 2025/03/29 18:20:13 by anakagaw         ###   ########.fr       */
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
	std::cout << "Invalid level." << std::endl;
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
