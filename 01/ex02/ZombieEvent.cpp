/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jserrano <jserrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 11:32:57 by jserrano          #+#    #+#             */
/*   Updated: 2021/02/08 13:32:31 by jserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

Zombie *ZombieEvent::newZombieType(std::string name){
    Zombie *res = new Zombie();
    res->name = name;
    res->type = type;
    return res;
}

void ZombieEvent::setZombieType(std::string str){
	type = str;
}
