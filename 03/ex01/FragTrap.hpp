/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 11:58:04 by marvin            #+#    #+#             */
/*   Updated: 2021/02/12 11:58:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <cstdlib>

class FragTrap
{
	private:
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
		FragTrap(std::string name);
		~FragTrap();

		int		vaulthunter_dot_exe(std::string const & target);
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	show();
};

#endif
