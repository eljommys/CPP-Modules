/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 12:28:36 by marvin            #+#    #+#             */
/*   Updated: 2021/02/07 12:28:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>

void Zombie::announce(){
	std::cout << "<" << name << " (" << type << ")> Braiiiiiiinnnssss..." << std::endl;
}

Zombie randomChump(){

    std::string names[5] = {"mike wazowsky", "woody allen", "al mcwighin", "jorge javier vazquez", "cristobal montoro"};
    Zombie zombie;

    zombie.name = names[rand() % 5];
    zombie.announce();
    return zombie;
}
