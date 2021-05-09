/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 14:03:00 by jserrano          #+#    #+#             */
/*   Updated: 2021/05/09 20:22:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

/* int main(){

    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");

    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter* bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);

    delete bob;
    delete me;
    delete src;

    return 0;
} */

int main() {

	std::cout << "1. Creating MateriaSource and learning two materias" << std::endl;
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
	std::cout << std::endl;

	std::cout << "2. Creating Character \"jim\" and equipping materials" << std::endl;
		Character* jim = new Character("jim");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		jim->equip(tmp);
		tmp = src->createMateria("cure");
		jim->equip(tmp);
	std::cout << std::endl;


	std::cout << "3. Creating ICharacter \"jim2\" from a copy of jim and deleting jim to prove deep copy" << std::endl;
		ICharacter* jim2 = new Character(*jim);
		delete jim;
	std::cout << std::endl;

	std::cout << "4. creating ice and cure and equipping more (testing with too much) Materia" << std::endl;
		AMateria *cure = new Cure;
		AMateria *ice = new Ice;

		jim2->equip(cure);
		jim2->equip(ice);
		jim2->equip(cure);
		jim2->equip(ice);
		std::cout << "Ice spell (equipped on 3) XP is: " << ice->getXP() << std::endl;
		std::cout << "Cure spell (equipped on 2) XP is: " << cure->getXP() << std::endl;
	std::cout << std::endl;

	std::cout << "5. using all equiped materias on new ICharacter bob" << std::endl;
		ICharacter *bob = new Character("Bob");
		jim2->use(0, *bob);
		jim2->use(1, *bob);
		jim2->use(2, *bob);
		jim2->use(3, *bob);
		jim2->use(10, *bob);
		jim2->use(-1, *bob);
		std::cout << "Ice spell (equipped on 3) XP is: " << ice->getXP() << std::endl;
		std::cout << "Cure spell (equipped on 2) XP is: " << cure->getXP() << std::endl;
	std::cout << std::endl;


	std::cout << "6. unequiping materias 2 and 3 and trying again" << std::endl;
		jim2->unequip(2);
		jim2->unequip(3);

		jim2->use(0, *bob);
		jim2->use(1, *bob);
		jim2->use(2, *bob);
		jim2->use(3, *bob);
		jim2->use(10, *bob);
		jim2->use(-1, *bob);
		std::cout << "Ice spell (unequipped) XP is: " << ice->getXP() << std::endl;
		std::cout << "Cure spell (unequipped) XP is: " << cure->getXP() << std::endl;
	std::cout << std::endl;

	std::cout << "7. requipping materias 2 and 3 in new order and trying again" << std::endl;
		jim2->equip(ice);
		jim2->equip(cure);

		jim2->use(0, *bob);
		jim2->use(1, *bob);
		jim2->use(2, *bob);
		jim2->use(3, *bob);
		jim2->use(10, *bob);
		jim2->use(-1, *bob);
		std::cout << "Ice spell (equiped on 2) XP is: " << ice->getXP() << std::endl;
		std::cout << "Cure spell (equiped on 3) XP is: " << cure->getXP() << std::endl;
	std::cout << std::endl;

	std::cout << "8. Deleting bob, jim2 and the MateriaSource" << std::endl;
		delete bob;
		delete jim2;
		delete src;
	std::cout << std::endl;

	return (0);
}
