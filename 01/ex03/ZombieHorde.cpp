/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 13:43:38 by jserrano          #+#    #+#             */
/*   Updated: 2021/02/14 13:25:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N){
    if (N > 0){
        size = N;
        this->horde = new Zombie[N];
        std::string names[5] = {"mike wazowsky", "woody allen", "al mcwighin", "jorge javier vazquez", "cristobal montoro"};

        for(int i = 0; i < N; i++)
            horde[i].name = names[rand() % 5];
    }
}

ZombieHorde::~ZombieHorde(){

    if (size > 0)
        delete[] this->horde;
}


void       ZombieHorde::announce(){

    for (int i = 0; i < size; i++)
        horde[i].announce();
}
