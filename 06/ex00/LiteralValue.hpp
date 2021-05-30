/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LiteralValue.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 12:36:49 by marvin            #+#    #+#             */
/*   Updated: 2021/05/29 12:36:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LITERALVALUE_HPP
# define LITERALVALUE_HPP

#include <iostream>
#include <sstream>
#include <iomanip>
#include <stdlib.h>
#include <errno.h>
#include <limits.h>
#include <float.h>

class	LiteralValue{

	private:
		std::string c;
		std::string i;
		std::string	f;
		std::string d;

	public:
		LiteralValue(std::string str);

		std::string		getC();
		std::string		getI();
		std::string		getF();
		std::string		getD();
};

std::ostream	&operator<<(std::ostream &out, LiteralValue &obj);

#endif
