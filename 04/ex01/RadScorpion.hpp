/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 12:45:14 by marvin            #+#    #+#             */
/*   Updated: 2021/02/15 12:45:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		RADSCORPION_HPP
# define		RADSCORPION_HPP

# include "Enemy.hpp"

class	RadScorpion: public Enemy{

	public:
		RadScorpion();
		virtual ~RadScorpion();
};

#endif
