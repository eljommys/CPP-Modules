/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jserrano <jserrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 13:43:38 by jserrano          #+#    #+#             */
/*   Updated: 2021/02/08 15:52:31 by jserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N){
    if (N > 0){
        size = N;
        this->horde = new Zombie[N];
        std::string names[5] = {"mike wazowsky", "woody allen", "al mcwighin", "jorge javier vazquez", "cristobal montoro"};

        while (N-- > 0)
            horde[N].name = names[rand() % 5];
    }
}

void       ZombieHorde::announce(){

    for (int i = 0; i < size; i++)
        horde[i].announce();
}