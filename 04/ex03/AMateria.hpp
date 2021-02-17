/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jserrano <jserrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 14:39:40 by jserrano          #+#    #+#             */
/*   Updated: 2021/02/17 14:31:57 by jserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
class AMateria;
# include "ICharacter.hpp"

class AMateria{

    private:
        std::string type;
        unsigned int _xp;

    public:
        AMateria(std::string const & type);
        virtual ~AMateria();

        AMateria &operator=(AMateria const &other);
        
        std::string const & getType() const; //Returns the materia type
        unsigned int getXP() const; //Returns the Materia's XP
        
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif