/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 14:38:24 by marvin            #+#    #+#             */
/*   Updated: 2021/02/10 14:38:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed(){

	std::cout << "Default constructor called" << std::endl;
	val = 0;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& obj){

	std::cout << "Copy constructor called" << std::endl;
	val = obj.val;
}

Fixed::Fixed(const int n){

	std::cout << "Int constructor called" << std::endl;
	val = n << frac;
}

Fixed::Fixed(const float n){

	std::cout << "Float constructor called" << std::endl;
	val = roundf(n * (float)(1 << frac));
}


void	Fixed::operator = (const Fixed& obj){

	std::cout << "Assignation operator called" << std::endl;
	this->val = obj.val;
}

int		Fixed::getRawBits( void ) const{

	std::cout << "getRawBits member function called" << std::endl;
	return val;
}

void	Fixed::setRawBits( int const raw ){

	std::cout << "setRawBits member function called" << std::endl;
	val = raw;
}

float	Fixed::toFloat() const{

	return ((float)val / (float)(1 << frac));
}

int		Fixed::toInt() const{

	return (val >> frac);
}


std::ostream &operator << (std::ostream &out, Fixed const &value){

    out << value.toFloat();
	return out;
}
