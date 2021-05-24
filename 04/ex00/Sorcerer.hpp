/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 17:00:49 by marvin            #+#    #+#             */
/*   Updated: 2021/02/14 17:00:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class	Sorcerer{

	private:
		std::string name;
		std::string title;

	public:
		Sorcerer(std::string name, std::string title);
		virtual ~Sorcerer();

		std::string		getName() const;
		std::string		getTitle() const;
		void			polymorph(Victim const &obj) const;

		Sorcerer		&operator=(const Sorcerer &obj);
};

std::ostream	&operator<<(std::ostream &out, const Sorcerer& obj);

#endif
