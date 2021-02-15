/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 21:58:59 by marvin            #+#    #+#             */
/*   Updated: 2021/02/14 21:58:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>

class AWeapon
{
	protected:
		std::string		name;
		int				damage;
		int				ap;

	public:
		AWeapon(std::string const & name, int apcost, int damage);
		virtual ~AWeapon();

		std::string const		&getName() const;
		int						getAPCost() const;
		int						getDamage() const;
		virtual void			attack() const = 0;
};

#endif
