/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 12:49:59 by marvin            #+#    #+#             */
/*   Updated: 2021/02/15 12:49:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(): Enemy(80, "RadScorpion"){

	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion(){

	std::cout << "* SPROTCH *" << std::endl;
}
