/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 23:37:38 by marvin            #+#    #+#             */
/*   Updated: 2021/02/14 23:37:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy{

	private:
		int				hp;
		std:: string	type;

	public:
		Enemy(int hp, std::string const & type);
		virtual ~Enemy();

		std::string const &getType() const;
		int getHP() const;

		virtual void takeDamage(int damage);

		Enemy		&operator=(const Enemy &obj);
};

#endif
