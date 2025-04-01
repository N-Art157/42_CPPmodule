/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakagawashinta <nakagawashinta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 14:27:09 by nakagawashi       #+#    #+#             */
/*   Updated: 2025/04/01 14:15:01 by nakagawashi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(std::string type) : type_(type)
{
	std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
	type_ = other.type_;
	return *this;
}

AAnimal::AAnimal(const AAnimal& other) : type_(other.type_)
{
	std::cout << "AAnimal copy constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
  std::cout << "AAnimal destructor called" << std::endl;
}

void AAnimal::makeSound() const 
{
	std::cout << "?" << std::endl;
}

std::string AAnimal::getType() const
{
	return type_;
}