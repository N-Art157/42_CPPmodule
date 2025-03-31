/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakagaw <anakagaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 03:02:14 by nakagawashi       #+#    #+#             */
/*   Updated: 2025/03/31 11:06:55 by anakagaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTRAP_HPP
# define FragTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
	FragTrap(const std::string& name = "default");
	FragTrap(const FragTrap& other);
	virtual ~FragTrap();
	FragTrap& operator=(const FragTrap& other);

	void highFivesGuys(void);
	virtual void attack(const std::string& target); // override
};

#endif