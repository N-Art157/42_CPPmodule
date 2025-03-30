/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakagawashinta <nakagawashinta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 18:11:10 by nakagawashi       #+#    #+#             */
/*   Updated: 2025/03/31 02:19:36 by nakagawashi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
	private:
		std::string name_;
		unsigned int hitPoints_;
		unsigned int energyPoints_;
		unsigned int attackDamage_;

	public:
		ClapTrap(const std::string& name = "default");
		~ClapTrap();
		ClapTrap(const ClapTrap& copy);
		ClapTrap& operator=(const ClapTrap& copy);

		void attack(const std::string& target);
		void takeDamage(unsigned  int amount);
		void beRepaired(unsigned int amount);

		std::string getName();
		void setAttackDamage(unsigned int attackDamage);
		unsigned int getAttackDamage();
};


#endif