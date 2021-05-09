/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 12:35:57 by marvin            #+#    #+#             */
/*   Updated: 2021/05/09 12:35:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name): FragTrap(name), NinjaTrap(name)
{
	this->hit_points = FragTrap::hit_points;
	this->max_hit_points = FragTrap::max_hit_points;
	this->energy_points = NinjaTrap::energy_points;
	this->max_energy_points = NinjaTrap::max_energy_points;
	this->level = 1;
	this->name = name;
	this->melee_attack_damage = NinjaTrap::melee_attack_damage;
	this->ranged_attack_damage = FragTrap::ranged_attack_damage;
	this->armor_damage_reduction = FragTrap::armor_damage_reduction;
}

SuperTrap::~SuperTrap()
{
	std::cout << "Killing supertrap" << std::endl;
}
