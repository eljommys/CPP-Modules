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

class Sorcerer{

	private:
		std::string name;
		std::string title;

	public:
		Sorcerer(std::string name, std::string title);
		~Sorcerer();

		void introduce();
};


#endif
