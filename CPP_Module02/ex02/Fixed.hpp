/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakagaw <anakagaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 22:27:57 by nakagawashi       #+#    #+#             */
/*   Updated: 2025/03/30 17:03:02 by anakagaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:
			Fixed();
			~Fixed();
			Fixed(const int value);
			Fixed(const float value);
			Fixed(const Fixed &fixed);
			Fixed &operator=(const Fixed &fixed);

			int		getRawBits(void) const;
			void	setRawBits(int const raw);
			
			float	toFloat(void) const;
			int		toInt(void) const;

			bool	operator>(const Fixed &fixed) const;
			bool	operator<(const Fixed &fixed) const;
			bool	operator>=(const Fixed &fixed) const;
			bool	operator<=(const Fixed &fixed) const;
			bool	operator==(const Fixed &fixed) const;
			bool	operator!=(const Fixed &fixed) const;

			Fixed	operator+(const Fixed &fixed) const;
			Fixed	operator-(const Fixed &fixed) const;
			Fixed	operator*(const Fixed &fixed) const;
			Fixed	operator/(const Fixed &fixed) const;

			Fixed	&operator++();
			Fixed	operator++(int);
			Fixed	&operator--();
			Fixed	operator--(int);

			static Fixed	&min(Fixed &a, Fixed &b);
			static Fixed	&max(Fixed &a, Fixed &b);
			static const Fixed	&min(const Fixed &a, const Fixed &b);
			static const Fixed	&max(const Fixed &a, const Fixed &b);
	private:
			int					value_;
			static const int	fractional_bits_ = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
