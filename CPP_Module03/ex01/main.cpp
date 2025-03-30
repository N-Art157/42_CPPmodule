/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakagawashinta <nakagawashinta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 18:11:53 by nakagawashi       #+#    #+#             */
/*   Updated: 2025/03/31 03:36:06 by nakagawashi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	// 1. ClapTrap の基本動作をテスト
	std::cout << "\n--- Testing ClapTrap ---" << std::endl;
	ClapTrap clapTrap("ClapTrap");

	clapTrap.setAttackDamage(5);
	clapTrap.attack("Target1");
	clapTrap.takeDamage(3);
	clapTrap.beRepaired(2);
	clapTrap.takeDamage(10); // ヒットポイントが0になるケース
	clapTrap.attack("Target2"); // ヒットポイントが0で攻撃できないケース

	// 2. ScavTrap の基本動作をテスト
	std::cout << "\n--- Testing ScavTrap ---" << std::endl;
	ScavTrap scavTrap("ScavTrap");

	scavTrap.setAttackDamage(15);
	scavTrap.attack("Target3");
	scavTrap.takeDamage(20);
	scavTrap.beRepaired(10);
	scavTrap.guardGate(); // ScavTrap の特殊機能をテスト
	scavTrap.takeDamage(100); // ヒットポイントが0になるケース
	scavTrap.attack("Target4"); // ヒットポイントが0で攻撃できないケース

	return 0;
}