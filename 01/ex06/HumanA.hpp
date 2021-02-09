/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jserrano <jserrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 15:55:30 by jserrano          #+#    #+#             */
/*   Updated: 2021/02/09 16:25:00 by jserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class   HumanA{

    Weapon          _weapon;
    std::string     name;

    public:
        HumanA(std::string name, Weapon weapon);
        void            attack();
};

#endif