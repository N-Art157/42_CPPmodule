/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakagawashinta <nakagawashinta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 16:14:35 by nakagawashi       #+#    #+#             */
/*   Updated: 2025/03/25 17:54:46 by nakagawashi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
	private:
			void	debug(void);
			void	info(void);
			void	warning(void);
			void	error(void);
	public:
			Harl();
			~Harl();
			void	complain(std::string level);
};

typedef void (Harl::*complainfn)(void);

#endif