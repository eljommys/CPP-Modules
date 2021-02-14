/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 13:12:09 by jserrano          #+#    #+#             */
/*   Updated: 2021/02/14 12:01:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(){
    ZombieEvent maker;
    Zombie *zombie;
    Zombie random;

    maker.setZombieType("lento");
    zombie =  maker.newZombieType("usain bolt");
    random = randomChump();

    zombie->announce();

    delete zombie;
}

