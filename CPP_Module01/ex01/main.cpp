/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakagaw <anakagaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:50:51 by nakagawashi       #+#    #+#             */
/*   Updated: 2025/03/29 16:52:00 by anakagaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#define NUM 5

int	main(void)
{
	std::cout << "Creating many zombies." << std::endl;
	Zombie* horde = zombieHorde(NUM, "Zombie");

	if (horde == NULL)
	{
		std::cout << "Error: Memory allocation failed." << std::endl;
		return (1);
	}
	for (int i = 0; i < NUM; i++)
	{
		horde[i].announce();
	}
	delete[] horde;
	return (0);
}
