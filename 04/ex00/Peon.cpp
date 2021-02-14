/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 19:54:20 by marvin            #+#    #+#             */
/*   Updated: 2021/02/14 19:54:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name):Victim(name){

	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon(){

	std::cout << "Bleuark..." << std::endl;
}


void	Peon::getPolymorphed() const{

	std::cout << this->name << " has been turned into a pink pony!" << std::endl;
}
