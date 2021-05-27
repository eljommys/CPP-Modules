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

std::string		Form::getName(){
	return this->name;
}
bool			Form::getSigned(){
	return this->sign;
}
int				Form::getSignGrade(){
	return this->sign_grade;
}
int				Form::getExecGrade(){
	return this->exec_grade;
}

bool		Form::beSigned(Bureaucrat &obj) {

	if (obj.getGrade() <= this->sign_grade)
		return (this->sign = true);
	return (false);
}

const char *Form::GradeTooHighException::what() const throw(){

	return "Grade is below 1";
}

const char *Form::GradeTooLowException::what() const throw(){

	return "Grade is above 150";
}

std::ostream		&operator<<(std::ostream &out, Form &obj){

	out << obj.getName() << ": " << std::endl;
	out << "\t" << "- Execution grade: " << obj.getExecGrade() << std::endl;
	out << "\t" << "- Sign grade: " << obj.getSignGrade() << std::endl;
	out << "\t" << "- Signed: " << obj.getSigned() << std::endl;

	return out;
}
