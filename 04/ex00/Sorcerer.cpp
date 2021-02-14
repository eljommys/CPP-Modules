/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 17:11:36 by marvin            #+#    #+#             */
/*   Updated: 2021/02/14 17:11:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title){

	this->name = name;
	this->title = title;
	std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer(){

	std::cout << name << ", " << title << ", is dead. Consequences will never be the same!" << std::endl;
}

std::string		Sorcerer::getName() const{

	return this->name;
}

std::string		Sorcerer::getTitle() const{

	return this->title;
}

void			Sorcerer::polymorph(const Victim& obj) const{

	obj.getPolymorphed();
}

std::ostream	&operator<<(std::ostream &out, const Sorcerer& obj){

	out << "I am " << obj.getName() << ", " << obj.getTitle() << ", and I like ponies!" << std::endl;
	return out;
}
