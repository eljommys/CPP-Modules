/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 18:48:41 by jserrano          #+#    #+#             */
/*   Updated: 2021/05/27 20:01:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class	Form{

	private:
		std::string	const	name;
		bool				sign;
		int			const	sign_grade;
		int			const	exec_grade;

	public:
		Form(std::string name, int sign_in_grade, int exec_grade);
		virtual ~Form(){};

		std::string		getName() const;
		bool			getSigned() const;
		int				getSignGrade() const;
		int				getExecGrade() const;
		bool			beSigned(Bureaucrat &obj);
		void			virtual action(Bureaucrat const &obj) const = 0;
		void			execute(Bureaucrat const &executor) const;

		class	GradeTooHighException: public std::exception{

			public:
				const char *what() const throw();
		};
		class	GradeTooLowException: public std::exception{

			public:
				const char *what() const throw();
		};
		class	NotSignedException: public std::exception{

			public:
				const char *what() const throw();
		};
};

std::ostream		&operator<<(std::ostream &out, Form &obj);

#endif
