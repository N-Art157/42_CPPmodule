/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakagaw <anakagaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:19:53 by nakagawashi       #+#    #+#             */
/*   Updated: 2025/03/29 16:39:46 by anakagaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::string name;
	name = "Zombie";

	std::cout << "Zombie on the STACK." << std::endl;
	std::cout << "Zombie name: " << std::flush;
	std::cin >> name;

	Zombie zombie_stack(name);
	zombie_stack.announce();

	name = "Zombie";

	std::cout << "Zombie on the HEAP." << std::endl;
	std::cout << "Zombie name: " << std::flush;
	std::cin >> name;

	Zombie *zombie_heap = newZombie(name);
	zombie_heap->announce();
	delete zombie_heap;

	randomChump("zombie_random");
	return (0);
}
