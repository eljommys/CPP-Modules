/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 15:56:05 by marvin            #+#    #+#             */
/*   Updated: 2021/02/15 15:56:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

# include "ISpaceMarine.hpp"

class	ISquad{

	public:
		virtual ~ISquad(){}
		virtual int getCount() const = 0;
		virtual ISpaceMarine* getUnit(int n) const = 0;
		virtual int push(ISpaceMarine* obj) = 0;
};

#endif
