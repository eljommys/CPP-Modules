/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 12:11:59 by marvin            #+#    #+#             */
/*   Updated: 2021/02/15 12:11:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type){

	this->hp = (hp < 0) ? 0 : hp;
	this->type = type;
}

Enemy::~Enemy(){}

std::string const 	&Enemy::getType() const{

	return this->type;
}

int					Enemy::getHP() const{

	return this->hp;
}

void				Enemy::takeDamage(int damage){

	this->hp -= (damage < 0 || !hp) ? 0 : damage;
	this->hp = (hp < 0) ? 0 : hp;
}
