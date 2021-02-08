/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jserrano <jserrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 13:12:09 by jserrano          #+#    #+#             */
/*   Updated: 2021/02/08 13:34:32 by jserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(){
    ZombieEvent *maker = new ZombieEvent();
    Zombie *zombie;
    Zombie *random;

    maker->setZombieType("lento");
    zombie =  maker->newZombieType("usain bolt");
    random = randomChump();

    zombie->announce();
    random->announce();

    delete maker;
    delete zombie;
    delete random;
}

