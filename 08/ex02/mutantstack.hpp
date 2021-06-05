/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 18:48:32 by marvin            #+#    #+#             */
/*   Updated: 2021/05/31 18:48:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <iterator>

template <typename T>
class	MutantStack: public std::stack<T>{

	public:
		MutantStack(): std::stack<T>() {}
		MutantStack(MutantStack &obj):std::stack<T>(){
			*this = obj;
		}

		typedef typename std::deque<T>::iterator iterator;

		iterator	end(){
			return this->c.end();
		}

		iterator	begin(){
			return this->c.begin();
		}
};

#endif
