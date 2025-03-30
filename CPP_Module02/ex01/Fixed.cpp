/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakagaw <anakagaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 22:34:11 by nakagawashi       #+#    #+#             */
/*   Updated: 2025/03/30 17:05:38 by anakagaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value_(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int value) : value_(value << Fixed::fractional_bits_)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value) : value_((int)roundf(value * (1 << Fixed::fractional_bits_)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) : value_(fixed.getRawBits())
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed)
		this->value_ = fixed.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	return (this->value_);
}

void	Fixed::setRawBits(int const raw)
{
	this->value_ = raw;
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->value_) / (1 << this->fractional_bits_));
}

int		Fixed::toInt(void) const
{
	return (this->value_ >> this->fractional_bits_);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}