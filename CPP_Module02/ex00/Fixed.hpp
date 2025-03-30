/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakagawashinta <nakagawashinta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 22:27:57 by nakagawashi       #+#    #+#             */
/*   Updated: 2025/03/28 22:49:13 by nakagawashi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
			Fixed();
			~Fixed();
			Fixed(const Fixed &fixed);
			Fixed &operator=(const Fixed &fixed);
			int		getRawBits(void) const;
			void	setRawBits(int const raw);
	private:
			int					value_;
			static const int	fractional_bits_ = 8;
};

#endif
