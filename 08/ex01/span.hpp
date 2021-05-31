/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 13:43:20 by marvin            #+#    #+#             */
/*   Updated: 2021/05/31 13:43:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <limits.h>

class		Span{

	private:
		unsigned int	n;
		unsigned int	i;
		int				*arr;

	public:
		Span();
		Span(Span const &obj);
		Span(int n);
		virtual ~Span();

		unsigned int		getSize() const;
		unsigned int		getIndex() const;

		void		addNumber(int num);
		int			shortestSpan();
		int			longestSpan();

		class	SpaceException: public std::exception{
			public:
				const char	*what() const throw();
		};
		class	NotEnoughElements: public std::exception{
			public:
				const char	*what() const throw();
		};

		int		&operator[](int i) const;
		Span	&operator=(Span const &obj);
};

#endif
