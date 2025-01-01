/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakagaw <anakagaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 15:42:00 by anakagaw          #+#    #+#             */
/*   Updated: 2025/01/01 16:07:05 by anakagaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "The memory address of str:" << &str << std::endl;
    std::cout << "The memory address of stringPTR:" << stringPTR << std::endl;
    std::cout << "The memory address of stringREF:" << &stringREF << std::endl;

    std::cout << "THe value of the str:" << str << std::endl;
    std::cout << "THe value of the stringPTR:" << *stringPTR << std::endl;
    std::cout << "THe value of the stringREF:" << stringREF << std::endl;
    return (0);
}