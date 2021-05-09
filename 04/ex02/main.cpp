/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 13:36:09 by jserrano          #+#    #+#             */
/*   Updated: 2021/05/09 19:31:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"
#include "Squad.hpp"

/* int main(){

    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;

    ISquad* vlc = new Squad;
    vlc->push(bob);
    vlc->push(jim);
    for (int i = 0; i < vlc->getCount(); ++i){

        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    delete vlc;

    return 0;
} */

int	main() {

	std::cout << "1. Creating a Marine and Terminator and pushing them in Squad1  + testing duplicate marine error" << std::endl;
		ISpaceMarine *bob = new TacticalMarine;
		ISpaceMarine *jim = new AssaultTerminator;

		Squad *squad = new Squad;

		squad->push(bob);
		squad->push(jim);
		squad->push(bob); // this will not add him and display an error, as he already exists in the squad
		squad->push(jim); // this will not add him and display an error, as he already exists in the squad

        for (int i = 0; squad->getUnit(i); i++)
            std::cout << i << std::endl;
	std::cout << std::endl;

	/*
	** Uncomment the part below if needed to test with bigger squads (will be longer to read though)
	*/
	// std::cout << "1.5 Pushing two new marines and two new terminators in Squad1" << std::endl;
	// 	squad->push(new TacticalMarine);
	// 	squad->push(new TacticalMarine);
	// 	squad->push(new AssaultTerminator);
	// 	squad->push(new AssaultTerminator);
	// std::cout << std::endl;

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
