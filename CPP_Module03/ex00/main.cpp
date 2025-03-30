/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakagawashinta <nakagawashinta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 18:11:53 by nakagawashi       #+#    #+#             */
/*   Updated: 2025/03/31 02:59:13 by nakagawashi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main(void)
{
	// 1. ClapTrap のインスタンスを作成
	ClapTrap clapTrap1("ClapTrap1");
	ClapTrap clapTrap2("ClapTrap2");

	// 2. 初期状態を表示
	std::cout << "\n--- Initial State ---" << std::endl;
	std::cout << clapTrap1.getName() << " has " << clapTrap1.getAttackDamage() << " attack damage." << std::endl;
	std::cout << clapTrap2.getName() << " has " << clapTrap2.getAttackDamage() << " attack damage." << std::endl;

	// 3. 攻撃力を設定
	clapTrap1.setAttackDamage(5);
	clapTrap2.setAttackDamage(8);

	// 4. ClapTrap1 が ClapTrap2 を攻撃
	std::cout << "\n--- ClapTrap1 Attacks ClapTrap2 ---" << std::endl;
	clapTrap1.attack(clapTrap2.getName());
	clapTrap2.takeDamage(clapTrap1.getAttackDamage());

	// 5. ClapTrap2 が ClapTrap1 を攻撃
	std::cout << "\n--- ClapTrap2 Attacks ClapTrap1 ---" << std::endl;
	clapTrap2.attack(clapTrap1.getName());
	clapTrap1.takeDamage(clapTrap2.getAttackDamage());

	// 6. ClapTrap1 が修理
	std::cout << "\n--- ClapTrap1 Repairs Itself ---" << std::endl;
	clapTrap1.beRepaired(3);

	// 7. エネルギーポイントが0になるまで攻撃
	std::cout << "\n--- ClapTrap1 Uses All Energy Points ---" << std::endl;
	for (int i = 0; i < 10; i++) {
		clapTrap1.attack(clapTrap1.getName());
	}

	// 8. ヒットポイントが0の状態で攻撃を試みる
	std::cout << "\n--- ClapTrap2 Tries to Attack with 0 Hit Points ---" << std::endl;
	clapTrap2.takeDamage(100); // ヒットポイントを0にする
	clapTrap2.attack(clapTrap1.getName());

	// 9. ヒットポイントが0の状態で修理を試みる
	std::cout << "\n--- ClapTrap2 Tries to Repair with 0 Hit Points ---" << std::endl;
	clapTrap2.beRepaired(5);

	return 0;
}