/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 14:53:24 by marvin            #+#    #+#             */
/*   Updated: 2021/02/12 14:53:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "FragTrap.hpp"

class ScavTrap{

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
		ScavTrap(std::string name);
		~ScavTrap();

		void	challengeNewcomer();
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	show();
};

#endif
