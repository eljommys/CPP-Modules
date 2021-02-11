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

	std::cout << "Compy constructor called" << std::endl;
	val = obj.val;
}


void	Fixed::operator = (const Fixed& obj){

	std::cout << "Assignation operator called" << std::endl;
	val = obj.val;
}

int		Fixed::getRawBits( void ) const{

	std::cout << "getRawBits member function called" << std::endl;
	return val;
}

void	Fixed::setRawBits( int const raw ){

	std::cout << "setRawBits member function called" << std::endl;
	val = raw;
}
