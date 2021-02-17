/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jserrano <jserrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 18:48:41 by jserrano          #+#    #+#             */
/*   Updated: 2021/02/17 19:20:43 by jserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class	Form{
	
	private:
		std::string	const	name;
		bool				sign;
		int			const	grade;


	public:
		Form(std::string name, int sign_in_grade, int exec_grade);
};

#endif
