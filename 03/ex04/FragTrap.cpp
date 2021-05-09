/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 11:57:42 by marvin            #+#    #+#             */
/*   Updated: 2021/02/12 11:57:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name){

	std::cout << "=====SETTING UP CL4P-TP. Hyperion® all rights reserved=====" << std::endl;
	this->hit_points = 100;
	this->max_hit_points = 100;
	this->energy_points = 100;
	this->max_energy_points = 100;
	this->level = 1;
	this->name = name;
	this->melee_attack_damage = 30;
	this->ranged_attack_damage = 20;
	this->armor_damage_reduction = 5;
	std::cout << "READY FOR DOOM" << std::endl << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "Frag Trap was erradicated" << std::endl;
}


int		FragTrap::vaulthunter_dot_exe(std::string const & target){

	std::string answer;
	std::string quotes[5] = {"HELLO BOYS I'M BAAACK!!!", "YIPEE KI YAY MOTHER***!",
		"HASTA LA VISTA BABY.", "KNOCK KNOCK", "SAY HELLO TO MA' LIL' FREND"};

	std::cout << "Wanna say a random attack phrase to " << target << "?. This costs 25 of energy. Type YES or NO:";
	while (1){
		std::cin >> answer;
		if (answer == "YES"){
			std::cout << quotes[rand() % 5] << std::endl;
			this->energy_points = (this->energy_points - 25 < 0) ? 0 : this->energy_points - 25;
			return 1;
		}
		if (answer == "NO")
			return 0;
		std::cout << "You deaff or what? Type the damn answer YES or NO:";
	}
}

void	FragTrap::rangedAttack(std::string const & target){

	if (!this->energy_points){
		std::cout << "Do U really think " << this->name << "'s gonna shoot somethin'?" << std::endl;
		std::cout << "Man he dead! :_(" << std::endl;
		return;
	}

	int damage = rand() % ((this->hit_points + 1) * this->energy_points / 100);

	std::cout << "FR4G-TP " << this->name << " shoots " << target <<
	" at range, causing " << damage << " points of damage!" << std::endl;
}

