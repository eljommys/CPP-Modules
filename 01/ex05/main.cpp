/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 20:34:13 by marvin            #+#    #+#             */
/*   Updated: 2021/02/08 20:34:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
//#include "Human.hpp"

int main()
{
	Brain brain;

	std::cout << brain.identify() << std::endl;

	//Human bob;
	//std::cout << bob.identify() << std::endl;
	//std::cout << bob.getBrain().identify() << std::endl;
}
