/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 17:16:46 by jserrano          #+#    #+#             */
/*   Updated: 2021/05/27 15:58:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){

	Bureaucrat	obj("tonacho", 200);
	Form		document("IRPF", 50, 30);

	std::cout << obj;

	for (int i = 0; i < 151; i++){
		obj.increment();
		std::cout << obj;
	}

	std::cout << "========== ===========" << std::endl;

	for (int i = 0; i < 151; i++){
		obj.decrement();
		std::cout << obj;
	}

	std::cout << document << std::endl;
	obj.signForm(document);

	for (int i = 0; i < 100; i++){
		obj.increment();
		std::cout << obj;
	}

	obj.signForm(document);
	std::cout << document << std::endl;

	return 0;
}
