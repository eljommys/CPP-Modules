/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 16:15:51 by jserrano          #+#    #+#             */
/*   Updated: 2021/05/27 20:42:02 by marvin           ###   ########.fr       */
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
		Bureaucrat(std::string const &name, int grade);
		virtual ~Bureaucrat(){};

		std::string			const &getName() const;
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
};

std::ostream	const &operator<<(std::ostream &out, Bureaucrat const &obj);

#endif
