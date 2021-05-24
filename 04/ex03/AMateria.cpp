/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 15:21:21 by jserrano          #+#    #+#             */
/*   Updated: 2021/05/24 20:14:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type): type(type), _xp(0){}

AMateria::~AMateria(){}

void    AMateria::use(ICharacter& target){

    this->_xp += 10;

    if (this->type == "ice")
        std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    else if (this->type == "cure")
        std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}


AMateria    &AMateria::operator=(AMateria const &other){

    this->type = other.type;
    this->_xp = other._xp;

    return *this;
}


std::string const & AMateria::getType() const{

    return this->type;
}
unsigned int        AMateria::getXP() const{

    return this->_xp;
}
