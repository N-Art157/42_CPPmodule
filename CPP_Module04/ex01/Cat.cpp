/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakagaw <anakagaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 14:27:28 by nakagawashi       #+#    #+#             */
/*   Updated: 2025/04/01 17:01:46 by anakagaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() :Animal("Cat")
{
	std::cout << "Cat constructor called" << std::endl;
	brain_ = new Brain();
}

Cat& Cat::operator=(const Cat& other)
{
	if (this == &other)
		return *this;
	Animal::operator=(other);
	Brain* new_brain = new Brain(*other.brain_);
	delete brain_;
	brain_ = new_brain;
	return *this;
}

Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "Cat copy constructor called" << std::endl;
	brain_ = new Brain(*other.brain_);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete brain_;
}

void Cat::makeSound() const
{
	std::cout << "Meow~" << std::endl;
}