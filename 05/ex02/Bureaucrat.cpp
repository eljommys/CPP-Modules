/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 16:53:08 by jserrano          #+#    #+#             */
/*   Updated: 2021/05/27 15:53:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &name, int grade): name(name){

	try{
		if (grade < 1){

			this->grade = 1;
			throw (GradeTooHighException());
		}
		else if (150 < grade){

			this->grade = 150;
			throw (GradeTooLowException());
		}
		else
			this->grade = grade;
	}catch(std::exception & e){

		std::cout << e.what() << std::endl;
	}
}


std::string const &Bureaucrat::getName()const{

	return this->name;
}

int				Bureaucrat::getGrade() const{

	return this->grade;
}

void			Bureaucrat::increment(){

	this->grade--;

	try{
		if (this->grade < 1){
			this->grade = 1;
			throw GradeTooHighException();
		}
		else if (this->grade > 150){
			this->grade = 150;
			throw GradeTooLowException();
		}
	} catch (std::exception & e){

		std::cout << e.what() << std::endl;
	}
}

void			Bureaucrat::decrement(){

	this->grade++;

	try{
		if (this->grade < 1){
			this->grade = 1;
			throw GradeTooHighException();
		}
		else if (this->grade > 150){
			this->grade = 150;
			throw GradeTooLowException();
		}
	} catch (std::exception & e){

		std::cout << e.what() << std::endl;
	}
}

void			Bureaucrat::signForm(Form &obj){

	if (obj.beSigned(*this) == true)
		std::cout << this->name << " signs " << obj.getName();
	else
		std::cout << this->name << " cannot sign " << obj.getName() << " because " << this->name << " has not enough grade.";
	std::cout << std::endl;
}

const char *Bureaucrat::GradeTooHighException::what() const throw(){

	return "Grade is below 1";
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){

	return "Grade is above 150";
}


std::ostream	const &operator<<(std::ostream &out, Bureaucrat const &obj){

	out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
	return out;
}
