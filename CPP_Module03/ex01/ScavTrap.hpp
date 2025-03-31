/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakagaw <anakagaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 03:02:14 by nakagawashi       #+#    #+#             */
/*   Updated: 2025/03/31 11:07:49 by anakagaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

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