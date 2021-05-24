/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 19:01:11 by marvin            #+#    #+#             */
/*   Updated: 2021/02/14 19:01:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>

class	Victim{

	protected:
		std::string name;

	public:
		Victim(std::string name);
		virtual ~Victim();

		std::string	getName() const;
		void	getPolymorphed() const;

		Victim &operator=(const Victim &obj);
};

std::ostream	&operator<<(std::ostream &out, const Victim& obj);

#endif
