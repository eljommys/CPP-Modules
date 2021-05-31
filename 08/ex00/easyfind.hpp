/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 13:13:11 by marvin            #+#    #+#             */
/*   Updated: 2021/05/31 13:13:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iterator>

template <typename T>
int		easyfind(T &con, int n){

	typename T::iterator iter = std::find(con.begin(), con.end(), n);
	if (iter == con.end())
		return -1;
	return std::distance(con.begin(), iter);
}

#endif
