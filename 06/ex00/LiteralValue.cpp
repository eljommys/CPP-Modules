/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LiteralValue.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 12:40:24 by marvin            #+#    #+#             */
/*   Updated: 2021/05/29 12:40:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LiteralValue.hpp"

static void		set_char(std::string &c, std::string str){

	int val;
	std::istringstream iss(str);
	iss >> val;

	if (iss.fail())
		c += "imposible";
	else if (val < 32 || 126 < val)
		c += "Non displayable";
	else {
		c += "'";
		c += val;
		c += "'";
	}
}

static void		set_int(std::string &i, std::string str){

	int val;
	std::istringstream iss(str);
	std::ostringstream oss;
	iss >> val;

	if (iss.fail() || val > INT_MAX || val < INT_MIN)
		i += "imposible";
	else {
		oss << val;
		i = oss.str();
	}
}

static void		set_float(std::string &i, std::string str){

	float val;
	std::istringstream iss(str);
	std::ostringstream oss;
	iss >> val;

	if (str == "-inff" || str == "+inff" || str == "nanf" || str == "-inf" || str == "+inf" || str == "nan")
	{
		i += str;
		if (str == "-inf" || str == "+inf" || str == "nan")
			i += "f";
	}
	else if (iss.fail() || val > FLT_MAX || val < -FLT_MIN)
		i += "imposible";
	else {
		oss << std::fixed << std::setprecision(1) << val << "f";
		i = oss.str();
	}
}

static void		set_double(std::string &i, std::string str){

	float val;
	std::istringstream iss(str);
	std::ostringstream oss;
	iss >> val;

	if (str == "-inff" || str == "+inff" || str == "nanf" || str == "-inf" || str == "+inf" || str == "nan")
	{
		if (str == "-inff" || str == "+inff" || str == "nanf")
			str.erase(str.length() - 1, 1);
		i += str;
	}
	else if (iss.fail()  || val > DBL_MAX || val < -DBL_MIN)
		i += "imposible";
	else {
		oss << std::fixed << std::setprecision(1) << val;
		i = oss.str();
	}
}

LiteralValue::LiteralValue(std::string str){

	set_char(this->c, str);
	set_int(this->i, str);
	set_float(this->f, str);
	set_double(this->d, str);
}

std::string		LiteralValue::getC(){
	return this->c;
}
std::string		LiteralValue::getI(){
	return this->i;
}
std::string		LiteralValue::getF(){
	return this->f;
}
std::string		LiteralValue::getD(){
	return this->d;
}

std::ostream	&operator<<(std::ostream &out, LiteralValue &obj){

	out << "char: " << obj.getC() << std::endl;
	out << "int: " << obj.getI() << std::endl;
	out << "float: " << obj.getF() << std::endl;
	out << "double: " << obj.getD();

	return out;
}

