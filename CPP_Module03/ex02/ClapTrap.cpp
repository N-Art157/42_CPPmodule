/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakagaw <anakagaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 18:28:35 by nakagawashi       #+#    #+#             */
/*   Updated: 2025/03/31 11:18:24 by anakagaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name) : name_(name), hitPoints_(10), energyPoints_(10), attackDamage_(0)
{
	std::cout << "ClapTrap " << name_ << " is created" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name_ << " is destroyed" << std::endl;
}
ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
{
	name_ = copy.name_;
	hitPoints_ = copy.hitPoints_;
	energyPoints_ = copy.energyPoints_;
	attackDamage_ = copy.attackDamage_;
	return *this;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	std::cout << "ClapTrap " << name_ << " is created with copy constructor" << std::endl;
	*this = copy;
}

void ClapTrap::attack(const std::string& target)
{
	if (hitPoints_ == 0)
	{
		std::cout << "ClapTrap " << name_ << " tries to attack " << target
				  << " but can't because it has no hit points left!" << std::endl;
		return ;
	}
	if (energyPoints_ == 0)
	{
		std::cout << "ClapTrap " << name_ << " tries to attack " << target
				  << " but can't because it has no energy points left!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name_ << " attacks " << target << ", causing " << attackDamage_ << " points of damage!" << std::endl;
	energyPoints_--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << name_ << " takes " << amount << " points of damage!" << std::endl;
	if (hitPoints_ <= amount)
	{
		hitPoints_ = 0;
		std::cout << "ClapTrap " << name_ << " has no hit points" << std::endl;
	}
	else
	{
		hitPoints_ -= amount;
		std::cout << "Remaining hit points: " << hitPoints_ << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints_ == 0)
	{
		std::cout << "ClapTrap " << name_ << " tries to repair itself"
				  << " but can't because it has no hit points left..." << std::endl;
		return ;
	}
	if (energyPoints_ == 0)
	{
		std::cout << "ClapTrap " << name_ << " tries to repair itself"
				  << " but can't because it has no energy points left..." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name_ << " repairs itself, recovering "
			  << amount << " hit points!" << std::endl;
	energyPoints_--;
	unsigned long tmp = hitPoints_ + amount;
	if (tmp >= std::numeric_limits<unsigned int>::max())
	{
		hitPoints_ = std::numeric_limits<unsigned int>::max();
		std::cout << "ClapTrap " << name_ << "'s hit points are now maxed out!" << std::endl;
	}
	else
	{
		hitPoints_ = tmp;
		std::cout << "ClapTrap " << name_ << " now has " << hitPoints_ << " hit points." << std::endl;
	}
}

std::string ClapTrap::getName()
{
	 return name_;
}

void ClapTrap::setAttackDamage(unsigned int attackDamage)
{
	attackDamage_ = attackDamage;
	std::cout << "ClapTrap " << name_ << " attack damage is set to " << attackDamage_ << std::endl;
}

unsigned int ClapTrap::getAttackDamage()
{
	return attackDamage_;
}