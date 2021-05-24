/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 12:55:09 by marvin            #+#    #+#             */
/*   Updated: 2021/02/15 12:55:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "AWeapon.hpp"
# include "PlasmaRifle.hpp"
# include "PowerFist.hpp"
# include "Enemy.hpp"
# include "SuperMutant.hpp"
# include "RadScorpion.hpp"

class	Character{

	private:
		std::string	name;
		int			ap;
		AWeapon		*weapon;

	public:
		Character(std::string const & name);
		~Character();

		void	recoverAP();
		void	equip(AWeapon *weapon);
		void	attack(Enemy *enemy);

		std::string const &getName() const;
		int			const &getAP() const;
		std::string const &getWeapon() const;
		bool			isArmed();

		Character		&operator=(const Character &obj);
};

std::ostream	&operator<<(std::ostream &out, Character &obj);

#endif
