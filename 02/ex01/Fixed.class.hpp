/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 13:24:04 by marvin            #+#    #+#             */
/*   Updated: 2021/02/10 13:24:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>

class	Fixed{

	private:
		int					val;
		static const int	frac = 8;

	public:
		Fixed();
		~Fixed();

		Fixed(const Fixed& obj);
		Fixed(int n);
		void	operator = (const Fixed& obj);

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif
