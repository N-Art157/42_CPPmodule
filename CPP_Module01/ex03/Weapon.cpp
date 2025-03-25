/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakagawashinta <nakagawashinta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 23:50:12 by nakagawashi       #+#    #+#             */
/*   Updated: 2025/03/24 23:51:38 by nakagawashi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type_ = type;
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
