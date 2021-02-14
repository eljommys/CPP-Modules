/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 15:54:54 by jserrano          #+#    #+#             */
/*   Updated: 2021/02/14 13:45:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon& weapon) : name(name), _weapon(weapon) {}

void            HumanA::attack() const {
    std::cout << name << " attacks with his " << _weapon.getType() << std::endl;
}
