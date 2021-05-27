/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 18:43:53 by marvin            #+#    #+#             */
/*   Updated: 2021/05/27 18:43:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string name):Form(name, 25, 5){}

void	PresidentialPardonForm::action(Bureaucrat const &obj) const{

	std::cout << obj.getName() << " has been forgiven by Zafod Beeblebrox." << std::endl;
}
