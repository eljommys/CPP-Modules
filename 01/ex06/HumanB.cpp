/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jserrano <jserrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 15:55:14 by jserrano          #+#    #+#             */
/*   Updated: 2021/02/09 17:33:17 by jserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), _weapon(NULL){}

void            HumanB::attack(){
    std::cout << name << " attacks with his " << _weapon->getType() << std::endl;
}

void            HumanB::setWeapon(Weapon& weapon){
    this->_weapon = &weapon;
}