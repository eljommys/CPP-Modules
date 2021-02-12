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

int		main(){

	FragTrap	bot("CL4P-TP");

	bot.rangedAttack("Your mom");
	bot.meleeAttack("Your sister");
	bot.takeDamage(50);
	bot.beRepaired(10);
	bot.show();
}
