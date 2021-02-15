/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 23:32:17 by marvin            #+#    #+#             */
/*   Updated: 2021/02/14 23:32:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist():AWeapon("Power Fist", 8, 50){}

PowerFist::~PowerFist(){}

void	PowerFist::attack() const{

	std::cout << "* pschhh... SBAM! *" << std::endl;
}
