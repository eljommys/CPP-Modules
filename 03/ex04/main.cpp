/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 13:53:20 by marvin            #+#    #+#             */
/*   Updated: 2021/02/12 13:53:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int		main(){

	FragTrap	bot("CL4P-TP");
	ScavTrap	bot2("bot's son");
	NinjaTrap	ninja("Orochimaru");
	SuperTrap	super("Man");


	bot.vaulthunter_dot_exe("Ann");
	bot.rangedAttack("Your mom");
	bot.meleeAttack("Your sister");
	bot.takeDamage(50);
	bot.beRepaired(10);
	bot.show();

	bot2.rangedAttack("ME");
	bot2.meleeAttack("MY SON");
	bot2.takeDamage(50);
	bot2.beRepaired(10);
	bot2.challengeNewcomer();
	bot2.show();

	ninja.ninjaShowbox(bot);
	ninja.ninjaShowbox(bot2);
	ninja.ninjaShowbox(ninja);

	super.show();
	super.meleeAttack("Thuma D.R.E");
	super.meleeAttack("Mima D.R.E");
}
