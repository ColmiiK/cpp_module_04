/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:56:05 by alvega-g          #+#    #+#             */
/*   Updated: 2024/04/26 11:58:49 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cure.hpp>

Cure::Cure( void ) : _type("cure") {
	std::cout << _type << " materia constructed" << std::endl;
}

Cure::~Cure( void ) {
	std::cout << _type << " materia destroyed" << std::endl;
}

AMateria* Cure::clone( void ) const {
	return(new Cure);
}

void Cure::use( ICharacter &target ) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
