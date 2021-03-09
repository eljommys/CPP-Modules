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
	srand((int)time(0));
	std::cout << "READY FOR DOOM" << std::endl << std::endl;
}

FragTrap::~FragTrap(){

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

	this->vaulthunter_dot_exe(target);

	int damage = rand() % ((this->hit_points + 1) * this->energy_points / 100);

	std::cout << "FR4G-TP " << this->name << " shoots " << target <<
	" at range, causing " << damage << " points of damage!" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target){

	std::cout << "FR4G-TP " << this->name << " hits " << target;

	if (!this->energy_points){
		std::cout << "Do U really think " << this->name << "'s gonna hit somethin'?" << std::endl;
		std::cout << "Man he dead! :(" << std::endl;
		return;
	}

	int damage = rand() % (int)((float)(this->hit_points + 1) * (float)this->energy_points / 200.0f);
	std::cout << " with a monkey wrench, causing " << damage << " points of damage!" << std::endl;

	this->energy_points = (this->energy_points - damage/2 < 0) ? 0 : this->energy_points - damage/2;
	std::cout << "Don't do this unless is absolutely necessary. This is damaging for " << this->name << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount){

	if (!this->energy_points){
		std::cout << "You stoopid or what!? Don't shoot dead bodies!" << std::endl;
		return;
	}

	this->energy_points = (this->energy_points - amount + this->armor_damage_reduction < 0) ?
		0 : this->energy_points - amount + this->armor_damage_reduction;
	if (!this->energy_points)
		std::cout << "Such a shame. Only one day for his retiring" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount){

	if (this->energy_points == this->max_energy_points){
		std::cout << "Why do you want to repair it. He's like brand new" << std::endl;
		return;
	}

	this->energy_points = (this->energy_points + (int)amount > this->max_energy_points) ? this->max_energy_points : this->energy_points + amount;
	if (this->energy_points == this->max_energy_points)
		std::cout << "Ok, now " << this->name << " is in perfect conditions" << std::endl;
}

void	FragTrap::show(){
	std::cout << "hit points = " << hit_points << std::endl;
	std::cout << "max_hit_points = " << max_hit_points << std::endl;
	std::cout << "energy_points = " << energy_points << std::endl;
	std::cout << "max_energy_points = " << max_energy_points << std::endl;
	std::cout << "level = " << level << std::endl;
	std::cout << "name = " << name << std::endl;
	std::cout << "melee_attack_damage = " << melee_attack_damage << std::endl;
	std::cout << "ranged_attack_damage = " << ranged_attack_damage << std::endl;
	std::cout << "armor_damage_reduction = " << armor_damage_reduction << std::endl;
}
