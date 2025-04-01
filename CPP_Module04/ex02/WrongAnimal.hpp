/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakagaw <anakagaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 14:29:14 by nakagawashi       #+#    #+#             */
/*   Updated: 2025/04/01 16:58:17 by anakagaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>

class WrongAnimal
{
	public:
		WrongAnimal(std::string type = "WrongAnimal");
		WrongAnimal(const WrongAnimal& other);
		virtual ~WrongAnimal();
		WrongAnimal& operator=(const WrongAnimal& other);

		void makeSound() const;
		std::string getType() const;

	protected:
		std::string type_;
};

#endif
