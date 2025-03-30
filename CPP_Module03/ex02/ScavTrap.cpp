/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakagawashinta <nakagawashinta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 03:02:01 by nakagawashi       #+#    #+#             */
/*   Updated: 2025/03/31 03:25:09 by nakagawashi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
  std::cout << "ScavTrap constructor called" << std::endl;
  hitPoints_ = 100;
  energyPoints_ = 50;
  attackDamage_ = 20;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	ClapTrap::operator=(other);
	return *this;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate() const
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (hitPoints_ == 0)
	{
		std::cout << "ScavTrap " << name_ << " tries to attack " << target
				  << " but can't because it has no hit points left!" << std::endl;
		return ;
	}
	if (energyPoints_ == 0)
	{
		std::cout << "ScavTrap " << name_ << " tries to attack " << target
				  << " but can't because it has no energy points left!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << name_ << " attacks " << target << ", causing " << attackDamage_ << " points of damage!" << std::endl;
	energyPoints_--;
}
