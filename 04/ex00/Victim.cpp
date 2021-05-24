/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 19:04:01 by marvin            #+#    #+#             */
/*   Updated: 2021/02/14 19:04:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name){

	this->name = name;
	std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}

Victim::~Victim(){

	std::cout << "Victim " << name << " just died for no apparent reason!" << std::endl;
}

std::string		Victim::getName() const{

	return this->name;
}

void			Victim::getPolymorphed() const{

	std::cout << name << " has been turned into a cute little sheep!" << std::endl;
}

Victim			&Victim::operator=(const Victim &obj){

	this->name = obj.name;

	return *this;
}

std::ostream	&operator<<(std::ostream &out, const Victim& obj){

	out << "I am " << obj.getName() << " and I like otters!" << std::endl;
	return out;
}
