/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakagawashinta <nakagawashinta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 19:52:18 by nakagawashi       #+#    #+#             */
/*   Updated: 2025/03/24 17:19:44 by nakagawashi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	std::cout << "Zombie " << name << " is born." << std::endl;
	this->name_ = name;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << this->name_ << " is dead." << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << this->name_ << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}