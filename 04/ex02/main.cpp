/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 13:36:09 by jserrano          #+#    #+#             */
/*   Updated: 2021/05/25 19:23:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"
#include "Squad.hpp"

int	main() {

	std::cout << "1. Creating a Marine and Terminator and pushing them in Squad1  + testing duplicate marine error" << std::endl;
		ISpaceMarine *bob = new TacticalMarine;
		ISpaceMarine *jim = new AssaultTerminator;

		Squad *squad = new Squad;

		squad->push(bob);
		squad->push(jim);
		squad->push(bob);
		squad->push(jim);

        for (int i = 0; squad->getUnit(i); i++)
            std::cout << i << std::endl;
	std::cout << std::endl;


	std::cout << "2. Creating constructor copy of Squad1 in an ISquad" << std::endl;
		ISquad *isquad = new Squad(*squad);
	std::cout << std::endl;

	std::cout << "3. activating ISquad's marines" << std::endl;
		for (int i = 0; i < isquad->getCount(); i++)
		{
			ISpaceMarine *cur = isquad->getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
		}
	std::cout << std::endl;
    delete squad;

	return (0);
}
