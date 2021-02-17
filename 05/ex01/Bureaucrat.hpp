/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jserrano <jserrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 16:15:51 by jserrano          #+#    #+#             */
/*   Updated: 2021/02/17 18:14:50 by jserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class   Bureaucrat{

    private:
        std::string const   name;
        int                 grade;

    public:
        Bureaucrat(std::string const &name, int grade);

        std::string         const &getName() const;
        int                 getGrade() const;
        void                increment();
        void                decrement();

        class   GradeTooHighException: public std::exception{

            public:
                const char *what() const throw();
        };
        class   GradeTooLowException: public std::exception{

            public:
                const char *what() const throw();
        };
};

std::ostream    const &operator<<(std::ostream &out, Bureaucrat const &obj);

#endif