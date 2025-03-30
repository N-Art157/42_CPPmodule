/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakagawashinta <nakagawashinta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 22:34:11 by nakagawashi       #+#    #+#             */
/*   Updated: 2025/03/31 01:59:39 by nakagawashi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value_(0)
{
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const int value) : value_(value << Fixed::fractional_bits_)
{
}

Fixed::Fixed(const float value) : value_((int)roundf(value * (1 << Fixed::fractional_bits_)))
{
}

Fixed::Fixed(const Fixed &fixed) : value_(fixed.getRawBits())
{
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
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

bool	Fixed::operator>(const Fixed &fixed) const
{
	return (this->value_ > fixed.getRawBits());
}

bool	Fixed::operator<(const Fixed &fixed) const
{
	return (this->value_ < fixed.getRawBits());
}

bool	Fixed::operator>=(const Fixed &fixed) const
{
	return (this->value_ >= fixed.getRawBits());
}

bool	Fixed::operator<=(const Fixed &fixed) const
{
	return (this->value_ <= fixed.getRawBits());
}

bool	Fixed::operator==(const Fixed &fixed) const
{
	return (this->value_ == fixed.getRawBits());
}

bool	Fixed::operator!=(const Fixed &fixed) const
{
	return (this->value_ != fixed.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &fixed) const
{
	Fixed result;
	result.value_ = this->value_ + fixed.getRawBits();
	return (result);
}

Fixed	Fixed::operator-(const Fixed &fixed) const
{
	Fixed result;
	result.value_ = this->value_ - fixed.getRawBits();
	return (result);
}

Fixed	Fixed::operator*(const Fixed &fixed) const
{
	Fixed result;
	long tmp = static_cast<long>(this->value_ ) * static_cast<long>(fixed.getRawBits());
	result.value_ = static_cast<int>(tmp >> this->fractional_bits_);
	return (result);
}

Fixed	Fixed::operator/(const Fixed &fixed) const
{
	if (fixed.getRawBits() == 0)
	{
		std::cerr << "Error: Division by zero" << std::endl;
		return (Fixed(0));
	}
	Fixed result;
	long tmp = static_cast<long>(this->value_) << this->fractional_bits_;
	result.value_ = static_cast<int>(tmp / fixed.getRawBits());
	return (result);
}

Fixed	&Fixed::operator++()
{
	this->value_++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();
	return (tmp);
}

Fixed	&Fixed::operator--()
{
	this->value_--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return (tmp);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b ? a : b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b ? a : b);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}