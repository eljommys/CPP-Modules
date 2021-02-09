/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jserrano <jserrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 15:54:54 by jserrano          #+#    #+#             */
/*   Updated: 2021/02/09 16:22:46 by jserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon){
    this->_weapon = weapon;
    this->name = name;
}

void            HumanA::attack(){
    std::cout << name << " attacks with his " << _weapon.getType();
}