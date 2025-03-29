/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakagaw <anakagaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 23:46:46 by nakagawashi       #+#    #+#             */
/*   Updated: 2025/03/29 18:25:09 by anakagaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
	private:
			std::string	type_;
	public:
			Weapon(std::string type);
			Weapon();
			~Weapon();
			const std::string&	getType(void) const;
			void				setType(std::string type);
};

#endif