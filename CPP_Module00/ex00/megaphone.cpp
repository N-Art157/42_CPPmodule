/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakagawashinta <nakagawashinta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 01:24:36 by nakagawashi       #+#    #+#             */
/*   Updated: 2025/03/29 14:18:34 by nakagawashi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

std::string ToUpper(const std::string& s)
{
    std::string result = s;
    for (size_t i = 0; i < result.length(); i++)
    {
        result[i] = std::toupper(result[i]);
    }
    return result;
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