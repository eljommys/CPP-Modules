/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jserrano <jserrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 15:55:30 by jserrano          #+#    #+#             */
/*   Updated: 2021/02/09 17:40:00 by jserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class   HumanA{

    std::string     name;
    Weapon&          _weapon;

    public:
        HumanA(std::string name, Weapon& weapon);
        void            attack() const ;
};

#endif