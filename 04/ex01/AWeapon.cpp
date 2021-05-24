/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 23:11:42 by marvin            #+#    #+#             */
/*   Updated: 2021/02/14 23:11:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage){

	this->name = name;
	this->ap = (apcost < 0) ? 0 : apcost;
	this->damage = (damage < 0) ? 0 : damage;
}

AWeapon::~AWeapon(){}

std::string const		&AWeapon::getName() const{

	return this->name;
}

int						AWeapon::getAPCost() const{

	return this->ap;
}

int						AWeapon::getDamage() const{

	return this->damage;
}


AWeapon					&AWeapon::operator=(const AWeapon &obj){

	this->name = obj.name;
	this->damage = obj.damage;
	this->ap = obj.ap;

	return *this;
}
