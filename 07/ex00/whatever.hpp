/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 16:51:06 by marvin            #+#    #+#             */
/*   Updated: 2021/05/30 16:51:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void	swap(T &a, T &b){
	T aux;

	aux = a;
	a = b;
	b = aux;
}

template <typename T>
T		&min(T &a, T &b){
	if (a < b)
		return a;
	return b;
}

template <typename T>
T		&max(T &a, T &b){
	if (a > b)
		return a;
	return b;
}

#endif
