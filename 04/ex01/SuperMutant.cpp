/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Supermutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 12:29:35 by marvin            #+#    #+#             */
/*   Updated: 2021/02/15 12:29:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Supermutant.hpp"

SuperMutant::SuperMutant(): Enemy(170, "Super Mutant"){

	std::cout << "Gaaah. Break everything!" << std::endl;
}

SuperMutant::~SuperMutant(){

	std::cout << "Aaargh..." << std::endl;
}

void	SuperMutant::takeDamage(int damage){

	Enemy::takeDamage(damage - 3);
}
