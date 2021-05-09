/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 17:50:05 by marvin            #+#    #+#             */
/*   Updated: 2021/02/15 17:50:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(){

	std::cout << "Tactical marine ready for action!" << std::endl;
}

TacticalMarine::~TacticalMarine(){

	std::cout << "Aaaargh..." << std::endl;
}

ISpaceMarine*	TacticalMarine::clone() const{

	return (new TacticalMarine());
}

void			TacticalMarine::battleCry() const{

	std::cout << "For the holy PLOT!" << std::endl;
}

void			TacticalMarine::rangedAttack() const{

	std::cout << "* attacks with a bolter *" << std::endl;
}

void			TacticalMarine::meleeAttack() const{

	std::cout << "* attacks with a chainsword *" << std::endl;
}
