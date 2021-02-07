/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 17:06:31 by marvin            #+#    #+#             */
/*   Updated: 2021/02/06 17:06:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony	*ponyOnTheHeap(){
	Pony *pony = new Pony();

	pony->show();

	std::cout << "PONY ON THE HEAP RUNNING" << std::endl;
	pony->run();

	pony->show();

	std::cout << "PONY ON THE HEAP JUMPING" << std::endl;
	pony->jump();

	pony->show();

	std::cout << "PONY ON THE HEAP RUNNING" << std::endl;
	pony->run();

	pony->show();

	return pony;
}

Pony	ponyOnTheStack(){
	Pony pony;

	std::cout << "INIT PONY ON THE STACK" << std::endl;
	pony.init();

	pony.show();

	std::cout << "PONY ON THE STACK RUNNING" << std::endl;
	pony.run();

	pony.show();

	std::cout << "PONY ON THE STACK JUMPING" << std::endl;
	pony.jump();

	pony.show();

	std::cout << "PONY ON THE STACK RUNNING" << std::endl;
	pony.run();

	pony.show();

	return pony;
}
