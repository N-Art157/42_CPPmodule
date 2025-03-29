/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakagaw <anakagaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 19:20:38 by nakagawashi       #+#    #+#             */
/*   Updated: 2025/03/29 16:35:21 by anakagaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
	private:
			std::string	name_;
	public:
			Zombie(std::string name);
			~Zombie();
			void announce(void) const;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
