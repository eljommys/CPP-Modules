/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 15:59:58 by marvin            #+#    #+#             */
/*   Updated: 2021/02/15 15:59:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP

class	ISpaceMarine{

	public:
		virtual ~ISpaceMarine() {}
		virtual ISpaceMarine* clone() const = 0;
		virtual void battleCry() const = 0;
		virtual void rangedAttack() const = 0;
		virtual void meleeAttack() const = 0;
};

#endif
