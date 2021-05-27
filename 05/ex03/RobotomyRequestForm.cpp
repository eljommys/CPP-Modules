/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequest.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 18:23:35 by marvin            #+#    #+#             */
/*   Updated: 2021/05/27 18:23:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string name):Form(name, 72, 45){
	srand(time(0));
}

void		RobotomyRequestForm::action(Bureaucrat const &obj) const{

	if (rand() % 2)
	{
		std::cout << "* drill sounds *" << std::endl;
		std::cout << obj.getName() << " was succesfully robotomized." << std::endl;
	}
}
