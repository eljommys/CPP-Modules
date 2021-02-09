/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jserrano <jserrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 17:48:02 by jserrano          #+#    #+#             */
/*   Updated: 2021/02/09 19:08:40 by jserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

int     main(int argc, char **argv){

    if (argc == 4){

        std::ifstream   file (argv[1]);
        if (!file)
            return 1;
        
        std::stringstream fname;
        fname << argv[1] << ".replace";

        std::string     content;
        std::ofstream   res (fname.str());
        std::string     s1 = argv[2];
        std::string     s2 = argv[3];

        size_t pos;
        while (getline(file, content)){
            while ((pos = content.find(s1)) && pos != std::string::npos){
                //std::cout << content << std::endl;
                content.replace(pos, s1.length(), s2);
            }
            std::cout << content << std::endl;
        }
    }
}