/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakagawashinta <nakagawashinta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 14:28:28 by nakagawashi       #+#    #+#             */
/*   Updated: 2025/04/01 15:02:53 by nakagawashi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog constructor called" << std::endl;
	brain_ = new Brain();
}

Dog& Dog::operator=(const Dog& other)
{
	if (this == &other)
		return *this;
	Animal::operator=(other);
	Brain* new_brain = new Brain(*other.brain_);
	delete brain_;
	brain_ = new_brain;
	return *this;
}

Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "Dog copy constructor called" << std::endl;
	brain_ = new Brain(*other.brain_);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete brain_;
}

void Dog::makeSound() const
{
  std::cout << "Woof!" << std::endl;
}
