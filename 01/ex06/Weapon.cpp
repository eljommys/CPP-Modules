/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jserrano <jserrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 15:48:49 by jserrano          #+#    #+#             */
/*   Updated: 2021/02/09 17:25:57 by jserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type){
    this->type = type;
}

const std::string&  Weapon::getType() const{

    return this->type;
}

void                Weapon::setType(std::string str){

    this->type = str;
}