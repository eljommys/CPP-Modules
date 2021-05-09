/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 13:28:50 by marvin            #+#    #+#             */
/*   Updated: 2021/02/15 13:28:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

int main(){

	Character* me = new Character("me");

	std::cout << *me;

	Enemy* a = new SuperMutant();
	Enemy* b = new RadScorpion();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	std::cout << a->getHP() << std::endl;
	std::cout << b->getHP() << std::endl;

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);

	me->attack(b);
	me->attack(a);
	std::cout << *me;

	me->equip(pr);
	std::cout << *me;

	me->attack(b);
	me->attack(a);
	std::cout << *me;

	me->attack(a);
	me->attack(b);
	std::cout << *me;


	delete a;
	delete me;
	delete pr;
	delete pf;

	return 0;
}
