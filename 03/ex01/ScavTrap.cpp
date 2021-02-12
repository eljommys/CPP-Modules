/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 14:53:13 by marvin            #+#    #+#             */
/*   Updated: 2021/02/12 14:53:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name){

	std::cout << "=====SETTING UP SC4V-TP. Hyperion® all rights reserved=====" << std::endl;
	this->hit_points = 100;
	this->max_hit_points = 100;
	this->energy_points = 50;
	this->max_energy_points = 50;
	this->level = 1;
	this->name = name;
	this->melee_attack_damage = 20;
	this->ranged_attack_damage = 15;
	this->armor_damage_reduction = 3;
	std::cout << "READY FOR DOOM" << std::endl << std::endl;
}

ScavTrap::~ScavTrap(){

}


void	ScavTrap::challengeNewcomer(){

	std::string quotes[5] = {"5 PUSH UPS", "NOW A BACKFLIP",
		"LICK THAT DOG SHIT", "GIVE ME 50 BUCKS", "SAY HELLO TO MA' LIL' FREND. No really, say it!"};

	std::cout << "The challenge you have to do is..." << std::endl << quotes[rand() % 5] << std::endl;
}

void	ScavTrap::rangedAttack(std::string const & target){

	if (!this->energy_points){
		std::cout << "Do U really think " << this->name << "'s gonna shoot somethin'?" << std::endl;
		std::cout << "Man he dead! :_(" << std::endl;
		return;
	}

	int damage = rand() % ((this->hit_points + 1) * this->energy_points / 100);

	std::cout << "SC4V-TP " << this->name << " shoots " << target <<
	" at range, causing " << damage << " points of damage!" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target){

	std::cout << "SC4V-TP " << this->name << " hits " << target;

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

void	ScavTrap::takeDamage(unsigned int amount){

	if (!this->energy_points){
		std::cout << "You stoopid or what!? Don't shoot dead bodies!" << std::endl;
		return;
	}

	this->energy_points = (this->energy_points - amount + this->armor_damage_reduction < 0) ?
		0 : this->energy_points - amount + this->armor_damage_reduction;
	if (!this->energy_points)
		std::cout << "Such a shame. Only one day for his retiring" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount){

	if (this->energy_points == this->max_energy_points){
		std::cout << "Why do you want to repair it. He's like brand new" << std::endl;
		return;
	}

	this->energy_points = (this->energy_points + (int)amount > this->max_energy_points) ? this->max_energy_points : this->energy_points + amount;
	if (this->energy_points == this->max_energy_points)
		std::cout << "Ok, now " << this->name << " is in perfect conditions" << std::endl;
}

void	ScavTrap::show(){
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
