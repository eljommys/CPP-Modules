/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 18:20:43 by marvin            #+#    #+#             */
/*   Updated: 2021/05/30 18:20:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

void	sum(int &a){
	a++;
}

void	les(char &c){
	c--;
}

int main(){

	int array[] = {0,1,2,3,4,5};
	char list[] = {'b', 'c', 'd'};

	for (int i = 0; i < 6; i++)
		std::cout << array[i];
	std::cout << std::endl;

	iter(array, 6, sum);

	for (int i = 0; i < 6; i++)
		std::cout << array[i];
	std::cout << std::endl;

	for (int i = 0; i < 3; i++)
		std::cout << list[i];
	std::cout << std::endl;

	iter(list, 3, les);

	for (int i = 0; i < 3; i++)
		std::cout << list[i];
	std::cout << std::endl;

	return 0;
}
