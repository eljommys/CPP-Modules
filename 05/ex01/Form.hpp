/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 18:48:41 by jserrano          #+#    #+#             */
/*   Updated: 2021/05/30 16:02:54 by marvin           ###   ########.fr       */
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
		Form();
		Form(Form &obj);
		Form(std::string name, int sign_in_grade, int exec_grade);
		virtual ~Form();

		std::string		getName();
		bool			getSigned() const;
		int				getSignGrade();
		int				getExecGrade();
		bool			beSigned(Bureaucrat &obj);

		class	GradeTooHighException: public std::exception{

			public:
				const char *what() const throw();
		};
		class	GradeTooLowException: public std::exception{

			public:
				const char *what() const throw();
		};

		Form	&operator=(Form	const &obj);
};

std::ostream		&operator<<(std::ostream &out, Form &obj);

#endif
