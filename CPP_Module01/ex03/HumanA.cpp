/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakagaw <anakagaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 23:55:45 by nakagawashi       #+#    #+#             */
/*   Updated: 2025/03/29 17:46:39 by anakagaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : name_(name), weapon_(weapon)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack(void)
{
	if (this->weapon_.getType() == "")
		std::cout << this->name_ << "attacks without any weapons" << std::endl;
	else	
		std::cout << this->name_ << " attacks with his " << this->weapon_.getType() << std::endl;
}


