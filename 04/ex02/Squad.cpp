/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 16:19:38 by marvin            #+#    #+#             */
/*   Updated: 2021/02/15 16:19:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(): squad(nullptr), size(0){}

Squad::~Squad(){

	for (int i = 0; i < this->size; i++)
		delete this->squad[i];
	delete[] this->squad;
}


int				Squad::getCount() const{

	return this->size;
}

ISpaceMarine*	Squad::getUnit(int i) const{

	if (0 <= i < size)
		return this->squad[i];
	return nullptr;
}

int				Squad::push(ISpaceMarine* obj){

	if (obj == nullptr)
		return this->size;
	for (int i = 0; i < this->size; i++){
		if (obj == this->squad[i])
			return this->size;
	}

	this->size++;
	ISpaceMarine** aux = new ISpaceMarine*[this->size];

	for (int i = 0; i < this->size - 1; i++)
		aux[i] = this->squad[i];
	aux[this->size - 1] = obj;

	if (this->squad != nullptr)
		delete[] this->squad;

	this->squad = aux;
	return this->size;
}
