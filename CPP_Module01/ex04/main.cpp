/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakagaw <anakagaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 14:32:56 by nakagawashi       #+#    #+#             */
/*   Updated: 2025/03/29 18:06:05 by anakagaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

std::string	FtReplace(std::string content, std::string s1, std::string s2)
{
	if (s1.empty())
	{
		std::cout  << "Warning: The string to replace (s1) cannnot be empty." << std::endl;
		return (content);
	}
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
	
	std::ifstream	inFile(filename.c_str());
	if (!inFile.is_open())
	{
		std::cout << "Error: Cannot open file." << std::endl;
		return (1);
	}
	
	std::ostringstream buffer;
	buffer << inFile.rdbuf();
	std::string	content = buffer.str();
	inFile.close();

	std::string	result = FtReplace(content, s1, s2);

	std::ofstream	Outfile((filename + ".replace").c_str());
	if (!Outfile.is_open())
	{
		std::cout << "Error: Cannot create file." << std::endl;
		return (1);
	}
	Outfile << result;
	Outfile.close();
	
	return (0);
}