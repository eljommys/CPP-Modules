/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Inter.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 21:18:30 by marvin            #+#    #+#             */
/*   Updated: 2021/05/27 21:18:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Form	*Intern::makeForm(std::string name, std::string obj){

	Form			*form = nullptr;
	int				i;
	std::string		results[] = {"robotomy request", "presidential pardon", "shrubbery creation"};

	for (i = 0; i < 3 && name.compare(results[i]); i++);

	switch(i){
		case 0:
			std::cout << "Intern creates RobotomyRequestForm" << std::endl;
			form = new RobotomyRequestForm(obj);
			break;
		case 1:
			std::cout << "Intern creates PresidentialPardonForm" << std::endl;
			form = new PresidentialPardonForm(obj);
			break;
		case 2:
			std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
			form = new ShrubberyCreationForm(obj);
			break;
		default:
			std::cout << "Form not recognised" << std::endl;
			break;
	}

	return form;
}
