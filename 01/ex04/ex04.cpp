/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 16:27:18 by jserrano          #+#    #+#             */
/*   Updated: 2021/02/14 16:20:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(){

    std::string str = "HI THIS IS BRAIN";
    std::string *ptr = &str;
    std::string& ref = str;

    std::cout << *ptr << std::endl;
    std::cout << ref << std::endl;

    std::cout << ptr << std::endl;
    std::cout << &ref << std::endl;
}
