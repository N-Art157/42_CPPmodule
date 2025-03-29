/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakagaw <anakagaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 23:50:12 by nakagawashi       #+#    #+#             */
/*   Updated: 2025/03/29 18:27:35 by anakagaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type_ = type;
}

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}		

const std::string&	Weapon::getType(void) const
{
	return (this->type_);
}

void	Weapon::setType(std::string type)
{
	this->type_ = type;
}
