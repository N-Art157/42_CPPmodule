/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakagawashinta <nakagawashinta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 10:49:19 by nakagawashi       #+#    #+#             */
/*   Updated: 2025/03/28 16:25:29 by nakagawashi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <iostream>
# include <iomanip>

class Contact
{
	public:
			Contact();
			~Contact();
			void		Init(void);
			std::string	GetInput(std::string str);
			void		DisplayCollum(void) const;
			void		DisplayALL(void);
			void		setIndex(int index);
			std::string	GetTenChar(std::string str) const;

	private:
			std::string		first_name_;
			std::string		last_name_;
			std::string		nickname_;
			std::string		phone_number_;
			std::string		darkest_secret_;
			int				index_;
};

#endif