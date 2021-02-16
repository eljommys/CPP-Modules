/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssautlTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jserrano <jserrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 13:31:20 by jserrano          #+#    #+#             */
/*   Updated: 2021/02/16 13:33:23 by jserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(){
	
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator(){
	
	std::cout << "I’ll be back..." << std::endl;
}

ISpaceMarine*	AssaultTerminator::clone() const{

	return (new AssaultTerminator());
}

void			AssaultTerminator::battleCry() const{

	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void			AssaultTerminator::rangedAttack() const{

	std::cout << "* does nothing *" << std::endl;
}

void			AssaultTerminator::meleeAttack() const{

	std::cout << "* attacks with chainfists *" << std::endl;
}