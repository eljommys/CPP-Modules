/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 12:08:58 by marvin            #+#    #+#             */
/*   Updated: 2021/05/30 12:08:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

Base	*generate(void){

	srand(time(0));

	int i = rand() % 3;

	if (!i)
		return (new A());
	else if (i == 1)
		return (new B());
	else
		return (new C());
}

void	identify_from_pointer(Base *p){

	if (dynamic_cast<A *>(p))
		std::cout << "A";
	if (dynamic_cast<B *>(p))
		std::cout << "B";
	if (dynamic_cast<C *>(p))
		std::cout << "C";
	std::cout << std::endl;
}

void	identify_from_reference(Base &p){

	if (dynamic_cast<A *>(&p))
		std::cout << "A";
	if (dynamic_cast<B *>(&p))
		std::cout << "B";
	if (dynamic_cast<C *>(&p))
		std::cout << "C";
	std::cout << std::endl;
}

int		main(){

	Base *obj = generate();
	identify_from_pointer(obj);
	identify_from_reference(*obj);

	return 0;
}
