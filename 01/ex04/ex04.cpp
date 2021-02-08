/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jserrano <jserrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 16:27:18 by jserrano          #+#    #+#             */
/*   Updated: 2021/02/08 16:48:23 by jserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(){

    std::string str = "HI THIS IS BRAIN";
    std::string *ptr = &str;
    std::string& phr = str;

    printf("%s\n", str.c_str());
}