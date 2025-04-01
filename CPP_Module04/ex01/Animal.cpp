/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakagawashinta <nakagawashinta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 14:27:09 by nakagawashi       #+#    #+#             */
/*   Updated: 2025/04/01 15:22:10 by nakagawashi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(std::string type) : type_(type)
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	type_ = other.type_;
	return *this;
}

Animal::Animal(const Animal& other) : type_(other.type_)
{
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal()
{
  std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const 
{
	std::cout << "?" << std::endl;
}

std::string Animal::getType() const
{
	return type_;
}