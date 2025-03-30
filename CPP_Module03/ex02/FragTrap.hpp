/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakagawashinta <nakagawashinta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 03:02:14 by nakagawashi       #+#    #+#             */
/*   Updated: 2025/03/31 03:46:42 by nakagawashi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTRAP_HPP
# define FragTRAP_HPP

# include <string>
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