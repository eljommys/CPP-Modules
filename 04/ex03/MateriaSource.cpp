/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jserrano <jserrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 18:04:41 by jserrano          #+#    #+#             */
/*   Updated: 2021/02/16 19:10:26 by jserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){

    for (int i = 0; i < 4; i++)
        this->inventory[i] = nullptr;
}


MateriaSource   &MateriaSource::operator=(MateriaSource const &other){

    for (int i = 0; i < 4; i++)
        this->inventory[i] = other.inventory[i];
}


void    MateriaSource::learnMateria(AMateria* m){

    if (m == nullptr)
        return ;

    for (int i = 0; i < 4; i++)
        if (this->inventory[i] == nullptr){
            this->inventory[i] = m;
            return ;
        }
}

AMateria*   MateriaSource::createMateria(std::string const & type){

    
}