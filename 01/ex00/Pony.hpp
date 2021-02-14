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
	std::string name;

	public:

		Pony(std::string const name);
		~Pony();

		void jump();
		void run();
		void show();
};

Pony	*ponyOnTheHeap();
Pony	ponyOnTheStack();

#endif
