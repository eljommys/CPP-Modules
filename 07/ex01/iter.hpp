/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 17:36:31 by marvin            #+#    #+#             */
/*   Updated: 2021/05/30 17:36:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <unistd.h>

template <typename T>
void	iter(T *a, int size, void (*function)(T &)){

	if (!a || size <= 0 || !function)
		return ;

	for (int i = 0; i < size; i++)
		function(a[i]);
}

#endif
