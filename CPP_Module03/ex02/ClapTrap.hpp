/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakagaw <anakagaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 18:11:10 by nakagawashi       #+#    #+#             */
/*   Updated: 2025/03/31 11:10:49 by anakagaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>
#include <limits>

class ClapTrap
{
	protected:
		std::string name_;
		unsigned int hitPoints_;
		unsigned int energyPoints_;
		unsigned int attackDamage_;

	public:
		ClapTrap(const std::string& name = "default");
		virtual ~ClapTrap();
		ClapTrap(const ClapTrap& copy);
		ClapTrap& operator=(const ClapTrap& copy);

		virtual void attack(const std::string& target);
		void takeDamage(unsigned  int amount);
		void beRepaired(unsigned int amount);

		std::string getName();
		void setAttackDamage(unsigned int attackDamage);
		unsigned int getAttackDamage();
};


#endif