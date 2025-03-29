/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakagaw <anakagaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 23:54:08 by nakagawashi       #+#    #+#             */
/*   Updated: 2025/03/29 18:24:04 by anakagaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name_(name), weapon_(NULL)
{
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->weapon_ = &weapon;
}

void	HumanB::attack(void)
{
	if (this->weapon_ == NULL || this->weapon_->getType() == "")
		std::cout << this->name_ << " attacks without any weapons" << std::endl;
	else
		std::cout << this->name_ << " attacks with his " << this->weapon_->getType() << std::endl;
}
