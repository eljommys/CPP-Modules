/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 12:29:45 by marvin            #+#    #+#             */
/*   Updated: 2021/05/27 12:29:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form():name("noname"), sign(false), sign_grade(1), exec_grade(1){}

Form::Form(Form &obj): name(obj.getName()), sign(obj.getSigned()), sign_grade(obj.getSignGrade()), exec_grade(obj.getExecGrade()){}

Form::Form(std::string name, int sign_in_grade, int exec_grade):
	name(name),
	sign(false),
	sign_grade(sign_in_grade),
	exec_grade(exec_grade)
{
	try{
		if (this->sign_grade < 1 || this->exec_grade < 1)
			throw (GradeTooHighException());
		else if (150 < this->sign_grade || 150 < this->exec_grade)
			throw (GradeTooLowException());
	}catch(std::exception & e){

		std::cout << e.what() << std::endl;
	}
}

Form::~Form(){}


std::string		Form::getName() const{
	return this->name;
}
bool			Form::getSigned() const{
	return this->sign;
}
int				Form::getSignGrade() const{
	return this->sign_grade;
}
int				Form::getExecGrade() const{
	return this->exec_grade;
}

bool		Form::beSigned(Bureaucrat &obj) {

	if (obj.getGrade() <= this->sign_grade)
		return (this->sign = true);
	return (false);
}

bool		Form::execute(Bureaucrat const &executor) const{

	try{
		if (!this->getSigned())
			throw NotSignedException();
		if (executor.getGrade() > this->getExecGrade())
			throw GradeTooLowException();
	}catch(std::exception &e){

		std::cout << e.what() << std::endl;
		return false;
	}

	this->action(executor);
	return true;
}


const char *Form::GradeTooHighException::what() const throw(){

	return "Grade is too high";
}

const char *Form::GradeTooLowException::what() const throw(){

	return "Grade is too low";
}

const char *Form::NotSignedException::what() const throw(){

	return "Form not signed";
}

Form	&Form::operator=(Form	const &obj){

	this->sign = obj.getSigned();
	return *this;
}

std::ostream		&operator<<(std::ostream &out, Form &obj){

	out << obj.getName() << ": " << std::endl;
	out << "\t" << "- Execution grade: " << obj.getExecGrade() << std::endl;
	out << "\t" << "- Sign grade: " << obj.getSignGrade() << std::endl;
	out << "\t" << "- Signed: " << obj.getSigned() << std::endl;

	return out;
}
