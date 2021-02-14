/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 17:06:31 by marvin            #+#    #+#             */
/*   Updated: 2021/02/06 17:06:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string const name){

	legs = 4;
	health = 100;
	this->name = name;
}

Pony::~Pony(){

	std::cout << "KILLING " << this->name << std::endl;
};


void Pony::jump(){

	if (legs < 4)
		health -= 20;
}

void Pony::run(){

	legs--;
}

void Pony::show(){

	std::cout << "legs: " << legs << std::endl;
	std::cout << "health: " << health << std::endl;
}


Pony	*ponyOnTheHeap(){

	Pony *pony = new Pony("Heapy");

	pony->show();

	std::cout << "PONY ON THE HEAP RUNNING" << std::endl;
	pony->run();

	pony->show();

	std::cout << "PONY ON THE HEAP JUMPING" << std::endl;
	pony->jump();

	pony->show();

	std::cout << "PONY ON THE HEAP RUNNING" << std::endl;
	pony->run();

	pony->show();

	return pony;
}

Pony	ponyOnTheStack(){
	Pony pony("Stacky");

	std::cout << "INIT PONY ON THE STACK" << std::endl;

	pony.show();

	std::cout << "PONY ON THE STACK RUNNING" << std::endl;
	pony.run();

	pony.show();

	std::cout << "PONY ON THE STACK JUMPING" << std::endl;
	pony.jump();

	pony.show();

	std::cout << "PONY ON THE STACK RUNNING" << std::endl;
	pony.run();

	pony.show();

	return pony;
}
