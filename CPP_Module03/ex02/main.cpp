/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakagawashinta <nakagawashinta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 18:11:53 by nakagawashi       #+#    #+#             */
/*   Updated: 2025/03/31 03:54:15 by nakagawashi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	// FragTrap のテスト
	std::cout << "\n--- Testing FragTrap ---" << std::endl;
	FragTrap fragTrap("FragTrap");

	fragTrap.setAttackDamage(15);
	fragTrap.attack("Target3");
	fragTrap.takeDamage(20);
	fragTrap.beRepaired(10);
	fragTrap.highFivesGuys(); // fragTrap の特殊機能をテスト
	fragTrap.takeDamage(100); // ヒットポイントが0になるケース
	fragTrap.attack("Target4"); // ヒットポイントが0で攻撃できないケース

	return 0;
}