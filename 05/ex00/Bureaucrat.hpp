/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 16:15:51 by jserrano          #+#    #+#             */
/*   Updated: 2021/05/30 15:49:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class	Bureaucrat{

	private:
		std::string const	name;
		int					grade;

	public:
		Bureaucrat();
		Bureaucrat(Bureaucrat &obj);
		Bureaucrat(std::string const &name, int grade);
		virtual ~Bureaucrat();

		std::string			const &getName() const;
		int					getGrade() const;
		void				increment();
		void				decrement();

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
