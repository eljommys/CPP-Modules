/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jserrano <jserrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 16:02:30 by jserrano          #+#    #+#             */
/*   Updated: 2021/02/17 14:45:55 by jserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name): name(name){

    for (int i = 0; i < 4; i++)
        this->inventory[i] = nullptr;
}

std::string const & Character::getName() const{

    return this->name;
}


Character       &Character::operator=(Character const &other){
    
    for (int i = 0; i < 4; i++)
        this->inventory[i] = other.inventory[i];
    this->name = other.getName();
    return *this;
}


void                Character::equip(AMateria* m){

    if (m == nullptr)
        return ;

    for (int i = 0; i < 4; i++){
        if (this->inventory[i] == nullptr){
            this->inventory[i] = m;
            return ;
        }
        else if (this->inventory[i]->getType() == m->getType())
            return ;
    }
}

void                Character::unequip(int idx){

    if (idx < 0 || 3 < idx)
        return ;

    this->inventory[idx] = nullptr;
}

void                Character::use(int idx, ICharacter& target){

    if (idx < 0 || 3 < idx || this->inventory[idx] == nullptr)
        return ;

    this->inventory[idx]->use(target);
}