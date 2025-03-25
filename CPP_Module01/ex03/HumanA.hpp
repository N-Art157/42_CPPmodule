/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakagawashinta <nakagawashinta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 23:53:34 by nakagawashi       #+#    #+#             */
/*   Updated: 2025/03/25 00:08:24 by nakagawashi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
			std::string	name_;
			Weapon&		weapon_;
	public:
			HumanA(std::string name, Weapon& weapon);
			~HumanA();
			void	attack(void);
};

#endif