/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakagawashinta <nakagawashinta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 00:11:07 by nakagawashi       #+#    #+#             */
/*   Updated: 2024/10/12 15:38:22 by nakagawashi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include "Contact.hpp"

class	PhoneBook
{
	public:
			PhoneBook();
			~PhoneBook();
			void	ExplainCmds(void);
			void	AddContact(void);
			void	SearchContact(void);
	private:
			Contact	contacts_[8];
};

#endif