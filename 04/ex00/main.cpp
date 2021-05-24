/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 20:04:18 by marvin            #+#    #+#             */
/*   Updated: 2021/02/14 20:04:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Sorcerer merlin("Merlin", "the Magufo");

	Victim jim("Jimmy");
	Peon joe("Joe");

	std::cout << robert << merlin << jim << joe;
	jim = joe;
	robert = merlin;
	std::cout << robert << merlin << jim << joe;


	robert.polymorph(jim);
	robert.polymorph(joe);

	return 0;
}
