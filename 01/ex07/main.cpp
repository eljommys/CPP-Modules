/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 17:48:02 by jserrano          #+#    #+#             */
/*   Updated: 2021/02/09 22:46:06 by marvin           ###   ########.fr       */
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
            while ((pos = content.find(s1)) != std::string::npos)
                content.replace(pos, s1.length(), s2);
            res << content;
            if (file.eof() == false)
                res << std::endl;
        }
        res.close();
        return 0;
    }
    return 1;
}
