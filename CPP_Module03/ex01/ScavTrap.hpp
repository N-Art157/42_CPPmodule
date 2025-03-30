/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakagawashinta <nakagawashinta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 03:02:14 by nakagawashi       #+#    #+#             */
/*   Updated: 2025/03/31 03:06:25 by nakagawashi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
	ScavTrap(const std::string& name = "default");
	ScavTrap(const ScavTrap& other);
	virtual ~ScavTrap();
	ScavTrap& operator=(const ScavTrap& other);

	void guardGate() const;
	virtual void attack(const std::string& target); // override
};

#endif