/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 16:07:02 by marvin            #+#    #+#             */
/*   Updated: 2021/05/27 16:07:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#include "Form.hpp"

class	ShrubberyCreationForm: public Form{

	public:
		ShrubberyCreationForm(std::string name);

		void	action(Bureaucrat const &obj) const;
};

#endif
