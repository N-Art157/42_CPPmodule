/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakagawashinta <nakagawashinta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 12:49:28 by nakagawashi       #+#    #+#             */
/*   Updated: 2025/04/01 13:56:35 by nakagawashi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <string>
# include <iostream>
# include "Brain.hpp"

class AAnimal
{
	public:
		AAnimal(std::string type = "AAnimal");
		AAnimal(const AAnimal& other);
		virtual ~AAnimal();
		AAnimal& operator=(const AAnimal& other);
		
		std::string getType() const;
		virtual void makeSound() const = 0;
		
	protected:
		std::string type_;
};

#endif