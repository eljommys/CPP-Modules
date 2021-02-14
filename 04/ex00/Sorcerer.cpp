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

	std::cout << "I am " << name << ", " << title << ", and I like ponies!" << std::endl;
}


void	Sorcerer::introduce(){

	std::cout << "I am " << name << ", " << title << ", and I like ponies!" << std::endl;
}
