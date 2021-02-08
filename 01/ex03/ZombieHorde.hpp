/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jserrano <jserrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 13:44:08 by jserrano          #+#    #+#             */
/*   Updated: 2021/02/08 15:53:09 by jserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"


class ZombieHorde{

    int     size;
    Zombie  *horde;

    public:
        ZombieHorde(int N);

        void announce();
};

#endif