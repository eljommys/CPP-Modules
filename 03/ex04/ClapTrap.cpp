/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 18:55:24 by marvin            #+#    #+#             */
/*   Updated: 2021/05/08 18:55:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){

	std::cout << "Default Clap Trap Constructor" << std::endl;
	this->hit_points = 0;
	this->max_hit_points = 0;
	this->energy_points = 0;
	this->max_energy_points = 0;
	this->level = 1;
	this->name = "Default";
	this->melee_attack_damage = 0;
	this->ranged_attack_damage = 0;
	this->armor_damage_reduction = 0;
	srand((int)time(0));
	std::cout << "DONE" << std::endl << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "Deleting Clap Trap" << std::endl;
}

void	ClapTrap::rangedAttack(std::string const & target){

	if (!this->energy_points){
		std::cout << "Do U really think " << this->name << "'s gonna shoot somethin'?" << std::endl;
		std::cout << "Man he dead! :_(" << std::endl;
		return;
	}

	int damage = rand() % ((this->hit_points + 1) * this->energy_points / 100);

	std::cout << "FR4G-TP " << this->name << " shoots " << target <<
	" at range, causing " << damage << " points of damage!" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const & target){

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

void	ClapTrap::takeDamage(unsigned int amount){

	if (!this->energy_points){
		std::cout << "You stoopid or what!? Don't shoot dead bodies!" << std::endl;
		return;
	}

	this->energy_points = (this->energy_points - amount + this->armor_damage_reduction < 0) ?
		0 : this->energy_points - amount + this->armor_damage_reduction;
	if (!this->energy_points)
		std::cout << "Such a shame. Only one day for his retiring" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount){

	if (this->energy_points == this->max_energy_points){
		std::cout << "Why do you want to repair it. He's like brand new" << std::endl;
		return;
	}

	this->energy_points = (this->energy_points + (int)amount > this->max_energy_points) ? this->max_energy_points : this->energy_points + amount;
	if (this->energy_points == this->max_energy_points)
		std::cout << "Ok, now " << this->name << " is in perfect conditions" << std::endl;
}

void	ClapTrap::show(){
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

std::string ClapTrap::getName() const
{
	return this->name;
}
