/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 14:30:15 by marvin            #+#    #+#             */
/*   Updated: 2021/02/06 14:30:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact{

	std::string name;
	std::string surname;
	std::string nick;
	std::string login;
	std::string postal;
	std::string email;
	std::string phone;
	std::string birthday;
	std::string fav_meal;
	std::string underwear_color;
	std::string secret;

	public:
		Contact(){
			std::cout << "name: ";
			std::cin >> name;
			std::cout << "surname: ";
			std::cin >> surname;
			std::cout << "nick: ";
			std::cin >> nick;
			std::cout << "login: ";
			std::cin >> login;
			std::cout << "postal: ";
			std::cin >> postal;
			std::cout << "email: ";
			std::cin >> email;
			std::cout << "phone: ";
			std::cin >> phone;
			std::cout << "birthday: ";
			std::cin >> birthday;
			std::cout << "fav_meal: ";
			std::cin >> fav_meal;
			std::cout << "underwear_color: ";
			std::cin >> underwear_color;
			std::cout << "secret: ";
			std::cin >> secret;
			};
		~Contact(){}
		void show_att(std::string att){

			int len = (int)att.length();
			int i = 0;

			std::cout << "║";
			for (int j = 0; j < 10 - len; j++)
				std::cout << " ";
			while (i + 1 < len && i + 1 < 10)
				std::cout << att[i++];
			if (len > 10)
				std::cout << ".";
			else
				std::cout << att[i];
		}

		void show(){
			show_att(name);
			show_att(surname);
			show_att(nick);
			std::cout << "║" << std::endl;
		}
};

#endif
