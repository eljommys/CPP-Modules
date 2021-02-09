/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 20:16:00 by marvin            #+#    #+#             */
/*   Updated: 2021/02/08 20:16:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	IQ = 130;
}

std::string		Brain::identify() const{

	long address = (long)this;
	std::stringstream add;

	add << "0x" << std::uppercase << std::hex << address;
	return add.str();
}
