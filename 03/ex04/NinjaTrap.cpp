/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:17:21 by marvin            #+#    #+#             */
/*   Updated: 2021/05/09 00:17:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name)
{
	std::cout << "Whoo" << std::endl;
	this->hit_points = 60;
	this->max_hit_points = 60;
	this->energy_points = 120;
	this->max_energy_points = 120;
	this->level = 1;
	this->name = name;
	this->melee_attack_damage = 60;
	this->ranged_attack_damage = 5;
	this->armor_damage_reduction = 0;
	std::cout << "Sheesh" << std::endl << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "OMAEWA MU SHINDEIRU" << std::endl;
}

void	NinjaTrap::ninjaShowbox(NinjaTrap const & obj) const
{
	std::cout << "\"Rasengan\" to " << obj.getName() << std::endl;
}

void	NinjaTrap::ninjaShowbox(FragTrap const & obj) const
{
	std::cout << "Bruh.-" << obj.getName() << std::endl;
}
void	NinjaTrap::ninjaShowbox(ScavTrap const & obj) const
{
	std::cout << "MMMMMMMMMMMMicrowaving" << obj.getName() << std::endl;
}

void	NinjaTrap::meleeAttack(std::string const & target){

	std::cout << "Ninja " << this->name << " hits " << target;

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
