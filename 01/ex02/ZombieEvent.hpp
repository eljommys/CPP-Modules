/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 12:22:11 by marvin            #+#    #+#             */
/*   Updated: 2021/02/07 12:22:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"

class ZombieEvent{

	std::string type;

	public:
		ZombieEvent(){};
		~ZombieEvent(){};

		void setZombieType(std::string str){
			type = str;
		};

		Zombie *newZombieType(std::string name){
			Zombie *res = new Zombie();
			res->name = name;
			res->type = type;
			return res;
		}
};

#endif
