/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakagawashinta <nakagawashinta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 14:32:56 by nakagawashi       #+#    #+#             */
/*   Updated: 2025/03/25 15:44:03 by nakagawashi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string	ft_replace(std::string content, std::string s1, std::string s2)
{
	std::string	result;
	size_t	pos = 0;
	size_t 	found = content.find(s1, pos);
	while (found != std::string::npos)
	{
		result += content.substr(pos, found - pos);
		result += s2;
		pos = found + s1.length();
		found = content.find(s1, pos);
	}
	result += content.substr(pos);
	return (result);
}

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Error: Invalid number of arguments." << std::endl;
		return (1);
	}
	std::string		filename = argv[1];
	std::string 	s1 = argv[2];
	std::string 	s2 = argv[3];
	
	std::ifstream	inFile(filename);
	if (!inFile.is_open())
	{
		std::cout << "Error: Cannot open file." << std::endl;
		return (1);
	}
	
	std::string	content((std::istreambuf_iterator<char>(inFile)), 
						std::istreambuf_iterator<char>());
	inFile.close();

	std::string	result = ft_replace(content, s1, s2);

	std::ofstream	Outfile(filename + ".replace");
	if (!Outfile.is_open())
	{
		std::cout << "Error: Cannot create file." << std::endl;
		return (1);
	}
	Outfile << result;
	Outfile.close();
	
	return (0);
}