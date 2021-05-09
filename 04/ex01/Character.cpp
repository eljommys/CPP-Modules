/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 13:03:47 by marvin            #+#    #+#             */
/*   Updated: 2021/02/15 13:03:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name){

	this->name = name;
	this->ap = 40;
	this->weapon = NULL;
}

Character::~Character(){}


void	Character::recoverAP(){

	this->ap = (this->ap + 10 > 40) ? 40 : this->ap + 10;
}

void	Character::equip(AWeapon *weapon){

	this->weapon = weapon;
}

void	Character::attack(Enemy *enemy){

	if (this->weapon == NULL)
		return ;

	std::cout << this->name << " hasttaque " << enemy->getType() << " with a " << this->weapon->getName() << std::endl;
	this->weapon->attack();

	enemy->takeDamage(this->weapon->getDamage());
	this->ap -= (this->weapon->getName() == "Power Fist") ? 8 : 5;

	if (enemy->getHP() == 0)
		delete enemy;
}

std::string const &Character::getName() const{

	return this->name;
}

int			const &Character::getAP() const{

	return this->ap;
}

std::string const &Character::getWeapon() const{

	return this->weapon->getName();
}

bool			Character::isArmed(){
	if (this->weapon == NULL)
		return false;
	return true;
}

std::ostream	&operator<<(std::ostream &out, Character &obj){

	out << obj.getName() << " has " << obj.getAP() << " AP";
	if (obj.isArmed())
		out << " and carries a " << obj.getWeapon();
	else
		out << " and is unarmed";
	out << std::endl;
	return out;
}
