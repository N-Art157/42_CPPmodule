/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakagawashinta <nakagawashinta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 01:24:36 by nakagawashi       #+#    #+#             */
/*   Updated: 2024/10/08 02:39:24 by nakagawashi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

std::string ToUpper(std::string s)
{
	for (int i = 0; i < int(s.length()); i++)
	{
		s[i] = toupper(s[i]);
	}
	return (s);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else
	{
		for (int i = 1; i < argc; i++)
		{
			std::cout << ToUpper(argv[i]);
		}
		std::cout << std::endl;
	}
	return (0);
}