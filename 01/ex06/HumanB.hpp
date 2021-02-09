/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jserrano <jserrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 16:25:12 by jserrano          #+#    #+#             */
/*   Updated: 2021/02/09 17:39:36 by jserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class   HumanB{

    std::string             name;
    Weapon                  *_weapon;

    public:
        HumanB(std::string name);

        void            attack();
        void            setWeapon(Weapon& weapon);
};

#endif