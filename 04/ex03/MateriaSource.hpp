/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jserrano <jserrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 18:06:43 by jserrano          #+#    #+#             */
/*   Updated: 2021/02/16 19:09:47 by jserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource{
    
    private:
        AMateria   *inventory[4];

    public:
        MateriaSource();
        
        MateriaSource &operator=(MateriaSource const &other);

        void        learnMateria(AMateria* obj);
        AMateria*   createMateria(std::string const & type);
};

#endif