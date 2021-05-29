/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 12:15:07 by marvin            #+#    #+#             */
/*   Updated: 2021/05/29 12:15:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LiteralValue.hpp"

int		main(int argc, char **argv){

	if (argc != 2)
		return 1;

	LiteralValue	num(argv[1]);

	std::cout << num << std::endl;
}
