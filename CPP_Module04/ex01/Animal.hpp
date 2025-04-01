/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakagawashinta <nakagawashinta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 12:49:28 by nakagawashi       #+#    #+#             */
/*   Updated: 2025/04/01 13:56:35 by nakagawashi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>
# include "Brain.hpp"

class Animal
{
	public:
		Animal(std::string type = "Animal");
		Animal(const Animal& other);
		virtual ~Animal();
		Animal& operator=(const Animal& other);
		
		virtual void makeSound() const;
		std::string getType() const;
		
	protected:
		std::string type_;
};

#endif