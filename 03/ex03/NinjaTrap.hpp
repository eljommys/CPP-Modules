/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:15:50 by marvin            #+#    #+#             */
/*   Updated: 2021/05/09 00:15:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap: public ClapTrap
{
	public:
		NinjaTrap(std::string name);
		~NinjaTrap();

		void	ninjaShowbox(const NinjaTrap & obj) const;
		void	ninjaShowbox(const FragTrap & obj) const;
		void	ninjaShowbox(const ScavTrap & obj) const;
};

#endif
