/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 15:13:16 by marvin            #+#    #+#             */
/*   Updated: 2021/05/31 15:13:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span():n(0), i(0), arr(NULL){}
Span::Span(Span const &obj): n(obj.getSize()), i(obj.getIndex()){

	this->arr = new int[this->n];
	for (int i = 0; i < (int)this->i; i++)
		this->arr[i] = obj[i];
}
Span::Span(int num){

	this->n = (num < 0) ? 0 : num;
	this->i = 0;
	this->arr = new int[this->n];
}
Span::~Span(){
	if (this->arr)
		delete[] this->arr;
}

unsigned int	Span::getSize() const{
	return this->n;
}
unsigned int	Span::getIndex() const{
	return this->i;
}


void	Span::addNumber(int num){

	try{
		if (this->i == this->n)
			throw SpaceException();
	}catch(std::exception &e){
		std::cout << e.what() << std::endl;
		return ;
	}

	arr[(this->i)++] = num;
}

int		Span::shortestSpan(){

	try{
		if (this->i < 2)
			throw NotEnoughElements();
	}catch(std::exception &e){
		std::cout << e.what() << std::endl;
		return -1;
	}

	int		diff = INT_MAX;
	int		aux;
	for (int i = 0; i < (int)this->i - 1; i++){
		for (int j = i + 1; j < (int)this->i; j++){
			aux = this->arr[i] - this->arr[j];
			aux = (aux < 0) ? -aux : aux;
			diff = (aux < diff) ? aux : diff;
		}
	}
	return diff;
}

int		Span::longestSpan(){

	try{
		if (this->i < 2)
			throw NotEnoughElements();
	}catch(std::exception &e){
		std::cout << e.what() << std::endl;
		return -1;
	}

	int min = this->arr[0];
	int max = this->arr[this->i - 1];

	for (int i = 1; i < (int)this->i; i++){
		min = (this->arr[i] < min) ? this->arr[i] : min;
		max = (this->arr[this->i - 1 - i] > max) ? this->arr[this->i - 1 - i] : max;
	}

	return (max - min);
}


const char	*Span::SpaceException::what() const throw(){
	return "Array is full!";
}
const char	*Span::NotEnoughElements::what() const throw(){
	return "Not enough elements!";
}

int		&Span::operator[](int i) const{
	return this->arr[i];
}

Span	&Span::operator=(Span const &obj){

	this->n = obj.getSize();
	this->i = obj.getIndex();

	if (this->arr)
		delete[] this->arr;
	arr = new int[this->n];

	for (int i = 0; i < (int)this->i; i++)
		this->arr[i] = obj[i];

	return *this;
}
