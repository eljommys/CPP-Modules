/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 17:06:36 by marvin            #+#    #+#             */
/*   Updated: 2021/02/06 17:06:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class	Pony{

	int legs;
	int health;

	public:

		void init(){
			legs = 4;
			health = 100;
		}

		Pony(){
			init();
		}
		~Pony(){};

		void jump(){
			if (legs < 4)
				health -= 20;
		}

		void run(){
			legs--;
		}

		void show(){
			std::cout << "legs: " << legs << std::endl;
			std::cout << "health: " << health << std::endl;
		}
};

Pony	*ponyOnTheHeap();
Pony	ponyOnTheStack();

#endif
