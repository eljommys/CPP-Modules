/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 16:15:51 by jserrano          #+#    #+#             */
/*   Updated: 2021/05/30 16:13:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class	Form;

class	Bureaucrat{

	private:
		std::string const	name;
		int					grade;

	public:
		Bureaucrat();
		Bureaucrat(Bureaucrat &obj);
		Bureaucrat(std::string const &name, int grade);
		virtual ~Bureaucrat();

		std::string			getName() const;
		int					getGrade() const;
		void				increment();
		void				decrement();
		void				signForm(Form &obj);
		void				executeForm(Form &obj);

		class	GradeTooHighException: public std::exception{

			public:
				const char *what() const throw();
		};
		class	GradeTooLowException: public std::exception{

			public:
				const char *what() const throw();
		};

		Bureaucrat	&operator=(Bureaucrat const &obj);
};

std::ostream	const &operator<<(std::ostream &out, Bureaucrat const &obj);

#endif
