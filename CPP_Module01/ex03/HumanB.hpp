/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakagawashinta <nakagawashinta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 23:54:26 by nakagawashi       #+#    #+#             */
/*   Updated: 2025/03/25 00:08:05 by nakagawashi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
			std::string	name_;
			Weapon*		weapon_;
	public:
			HumanB(std::string name);
			~HumanB();
			void	setWeapon(Weapon& weapon);
			void	attack(void);
};

#endif