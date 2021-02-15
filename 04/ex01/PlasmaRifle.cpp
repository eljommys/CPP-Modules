/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 23:23:25 by marvin            #+#    #+#             */
/*   Updated: 2021/02/14 23:23:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle():AWeapon("Plasma Rifle", 5, 21){}

PlasmaRifle::~PlasmaRifle(){}

void	PlasmaRifle::attack() const{

	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
