/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jserrano <jserrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 17:16:46 by jserrano          #+#    #+#             */
/*   Updated: 2021/02/17 18:24:38 by jserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){

    Bureaucrat obj("tonacho", 200);

    std::cout << obj;

    for (int i = 0; i < 50; i++){
        obj.increment();
        std::cout << obj;
    }
    
    std::cout << "========== ===========" << std::endl;

    for (int i = 0; i < 50; i++){
        obj.decrement();
        std::cout << obj;
    }

    return 0;
}