/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jserrano <jserrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 14:05:09 by jserrano          #+#    #+#             */
/*   Updated: 2021/02/08 15:53:01 by jserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int main(){

    ZombieHorde *horda = new ZombieHorde(6);

    horda->announce();
    delete horda;
}