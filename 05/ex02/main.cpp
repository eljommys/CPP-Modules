/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 17:16:46 by jserrano          #+#    #+#             */
/*   Updated: 2021/05/27 20:26:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Form.hpp"

/* int main(){

	Bureaucrat				obj("tonacho", 200);
	ShrubberyCreationForm	barbol("barbol");
	PresidentialPardonForm	document("indulto");
	RobotomyRequest			lobotomia("lobotomia");

	std::cout << obj;

	for (int i = 0; i < 151; i++)
		obj.increment();
	std::cout << obj;

	std::cout << "========== ===========" << std::endl;

	for (int i = 0; i < 151; i++)
		obj.decrement();
	std::cout << obj;

	std::cout << document << std::endl;
	obj.signForm(document);

	for (int i = 0; i < 100; i++)
		obj.increment();
	std::cout << obj;

	obj.signForm(document);
	std::cout << document << std::endl;

	document.execute(obj);



	return 0;
}
 */

int	main() {

	//initliazing random seed
	srand(time(0));

	std::cout << "--- 1. Creating the forms  and bureaucrats ---" << std::endl;
		ShrubberyCreationForm shrub("coco");
		RobotomyRequestForm robot("student");
		PresidentialPardonForm pres("criminal dude");
		Bureaucrat ceo("CEO", 1);
		Bureaucrat bob("Bob", 70);

		std::cout << shrub;
		std::cout << robot;
		std::cout << pres;
		std::cout << bob;
		std::cout << ceo;
	std::cout << std::endl;

	std::cout << "--- 2. CEO  and Bob try executing the forms ---" << std::endl;
		shrub.execute(ceo);
		robot.execute(ceo);
		pres.execute(ceo);
		shrub.execute(bob);
		robot.execute(bob);
		pres.execute(bob);
	std::cout << std::endl;

	std::cout << "--- 3. CEO and Bob try signing the forms ---" << std::endl;
		bob.signForm(shrub);
		bob.signForm(robot);
		bob.signForm(pres);
		ceo.signForm(shrub);
		ceo.signForm(robot);
		ceo.signForm(pres);
	std::cout << std::endl;

	std::cout << "--- 4. CEO  and Bob try executing the forms again ---" << std::endl;
		shrub.execute(bob);
		robot.execute(bob);
		pres.execute(bob);
		shrub.execute(ceo);
		robot.execute(ceo);
		pres.execute(ceo);
	std::cout << std::endl;

	return (0);
}
