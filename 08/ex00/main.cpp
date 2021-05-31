/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 13:17:25 by marvin            #+#    #+#             */
/*   Updated: 2021/05/31 13:17:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int		main(){

	std::list<char> list;
	std::vector<int> vector;

	std::cout << "list(5) = " << easyfind(list, 5) << std::endl;
	std::cout << "vector(27) = " << easyfind(vector, 27) << std::endl;

	for (int i = 0; i < 20; i++){
		list.push_back(i);
		vector.push_back(i * 2 - 3);
	}

	std::cout << "list(5) = " << easyfind(list, 5) << std::endl;
	std::cout << "vector(27) = " << easyfind(vector, 27) << std::endl;

	return 0;
}
