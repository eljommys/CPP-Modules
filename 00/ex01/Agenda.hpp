/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   agenda.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 14:25:32 by marvin            #+#    #+#             */
/*   Updated: 2021/02/06 14:25:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AGENDA_HPP
# define AGENDA_HPP

# include "Contact.hpp"

class Agenda{

	Contact		*contacts[8];

	public:
		int		size = 0;
		~Agenda(){
			for (int i = 0; i < size; i++)
				delete contacts[i];
			size = 0;
		}

		void add(Contact *c){
			if (size < 8){
				contacts[size++] = c;
			}
		}

		void search(){
			std::cout << "╔══════════╦══════════╦══════════╦══════════╗" << std::endl;
			std::cout << "║   Index  ║First Name║ Last Name║ Nickname ║" << std::endl;
			for (int i = 0; i < size; i++){
				std::cout << "╠══════════╬══════════╬══════════╬══════════╣" << std::endl;
				std::cout << "║     " << i << "    ";
				contacts[i]->show();
			}
			std::cout << "╚══════════╩══════════╩══════════╩══════════╝" << std::endl;
		}
};

#endif
