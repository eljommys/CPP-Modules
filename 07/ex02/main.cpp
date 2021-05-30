/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 18:59:44 by marvin            #+#    #+#             */
/*   Updated: 2021/05/30 18:59:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(){
	Array<int> a;
	Array<int> b(7);
	Array<int> c(b);

	for (int i = 0; i < 7; i++)
		b[i] = i * 2;

	for (int i = 0; i < 7; i++)
		std::cout << b[i] << " ";
	std::cout << std::endl;

	for (int i = 0; i < 8; i++)
		std::cout << c[i] << " ";
	std::cout << std::endl;

	a = b;

	for (int i = 0; i < 8; i++)
		std::cout << a[i] << " ";
	std::cout << std::endl;

	Array<int> d(b);

	for (int i = 0; i < 8; i++)
		std::cout << d[i] << " ";
	std::cout << std::endl;
}
