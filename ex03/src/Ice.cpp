/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:51:29 by alvega-g          #+#    #+#             */
/*   Updated: 2024/04/26 11:59:52 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Ice.hpp>

Ice::Ice( void ) : _type("ice") {
	std::cout << _type << " materia constructed" << std::endl;
}

Ice::~Ice( void ) {
	std::cout << _type << " materia destroyed" << std::endl;
}

AMateria* Ice::clone( void ) const {
	return(new Ice);
}

void Ice::use( ICharacter &target ) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
