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
	std::cout << "Scav Trap was erradicated" << std::endl;
}


void	ScavTrap::challengeNewcomer(){

	std::string quotes[5] = {"5 PUSH UPS", "NOW A BACKFLIP",
		"LICK THAT DOG SHIT", "GIVE ME 50 BUCKS", "SAY HELLO TO MA' LIL' FREND. No really, say it!"};

	std::cout << "The challenge you have to do is..." << std::endl << quotes[rand() % 5] << std::endl;
}
