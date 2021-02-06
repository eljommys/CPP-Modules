/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 14:12:13 by marvin            #+#    #+#             */
/*   Updated: 2021/02/06 14:12:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Agenda.hpp"

int main(){

	std::string command;
	Agenda my_agenda;

	while (1){
		std::cout << "Please type one of the following commands: ADD, SEARCH or EXIT" << std::endl;
		std::cin >> command;
		if (command == "ADD" && my_agenda.size < 8)
			my_agenda.add(new Contact());
		else if (command == "SEARCH")
			my_agenda.search();
		else if (command == "EXIT"){
			my_agenda.~Agenda();
			return 0;
		}
	}
}
