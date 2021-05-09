/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 18:50:39 by marvin            #+#    #+#             */
/*   Updated: 2021/05/08 18:50:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <cstdlib>
# include <ctime>

class ClapTrap
{
	protected:
		int			hit_points;
		int			max_hit_points;
		int			energy_points;
		int			max_energy_points;
		int			level;
		std::string	name;
		int			melee_attack_damage;
		int			ranged_attack_damage;
		int			armor_damage_reduction;

	public:
		ClapTrap();
		~ClapTrap();

		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	show();
};

#endif
