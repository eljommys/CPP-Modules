/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 17:48:02 by jserrano          #+#    #+#             */
/*   Updated: 2021/02/10 17:50:04 by marvin           ###   ########.fr       */
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
        std::string     aux;
        std::ofstream   res (fname.str());
        std::string     s1 = argv[2];
        std::string     s2 = argv[3];

        int pos[2];
        while (getline(file, content)){

            aux = content;
            pos[1] = -1;

            while ((pos[0] = content.find(s1)) != (int)std::string::npos && pos[0] != pos[1]){

                aux.replace(pos[0], s1.length(), s2);
                pos[1] = pos[0];
            }

            res << aux;
            if (file.eof() == false)
                res << std::endl;
        }
        res.close();
        return 0;
    }
    return 1;
}
