/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 16:05:18 by marvin            #+#    #+#             */
/*   Updated: 2021/02/15 16:05:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class	Squad: public ISquad{

	private:
		ISpaceMarine**	squad;
		int				size;

	public:
		Squad();
		~Squad();
		int				getCount() const;
		ISpaceMarine*	getUnit(int i) const;
		int				push(ISpaceMarine* obj);

		Squad			&operator=(const Squad &obj);
};

#endif
