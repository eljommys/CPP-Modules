/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 17:13:42 by marvin            #+#    #+#             */
/*   Updated: 2021/05/30 17:13:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

int		main(){

	char a = 'a', b = 'b';
	int	i = 3, j = 4;
	double k = 2.0, l = 2.5;
	float p = 3.5f, q = 3.7f;

	std::cout << "=====Char=====" << std::endl;
	std::cout << "a = '" << a << "', b = '" << b << "'" << std::endl;
	std::cout << "min = " << min(a, b) << std::endl;
	std::cout << "max = " << max(a, b) << std::endl;
	swap(a, b);
	std::cout << "SWAP" << std::endl;
	std::cout << "a = '" << a << "', b = '" << b << "'" << std::endl;
	std::cout << "min = " << min(a, b) << std::endl;
	std::cout << "max = " << max(a, b) << std::endl;

	std::cout << "=====Int=====" << std::endl;
	std::cout << "i = '" << i << "', j = '" << j << "'" << std::endl;
	std::cout << "min = " << min(i, j) << std::endl;
	std::cout << "max = " << max(i, j) << std::endl;
	swap(i, j);
	std::cout << "SWAP" << std::endl;
	std::cout << "i = '" << i << "', j = '" << j << "'" << std::endl;
	std::cout << "min = " << min(i, j) << std::endl;
	std::cout << "max = " << max(i, j) << std::endl;

	std::cout << "=====Double=====" << std::endl;
	std::cout << "k = '" << k << "', l = '" << l << "'" << std::endl;
	std::cout << "min = " << min(k, l) << std::endl;
	std::cout << "max = " << max(k, l) << std::endl;
	swap(k, l);
	std::cout << "SWAP" << std::endl;
	std::cout << "k = '" << k << "', l = '" << l << "'" << std::endl;
	std::cout << "min = " << min(k, l) << std::endl;
	std::cout << "max = " << max(k, l) << std::endl;

	std::cout << "=====Float=====" << std::endl;
	std::cout << "p = '" << p << "', q = '" << q << "'" << std::endl;
	std::cout << "min = " << min(p, q) << std::endl;
	std::cout << "max = " << max(p, q) << std::endl;
	swap(p, q);
	std::cout << "SWAP" << std::endl;
	std::cout << "p = '" << p << "', q = '" << q << "'" << std::endl;
	std::cout << "min = " << min(p, q) << std::endl;
	std::cout << "max = " << max(p, q) << std::endl;
}
