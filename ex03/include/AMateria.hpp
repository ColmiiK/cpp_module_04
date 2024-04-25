/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:17:41 by alvega-g          #+#    #+#             */
/*   Updated: 2024/04/18 12:19:23 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <iostream>

class AMateria {
	protected:
	public:
		AMateria( std::string const & type );
		std::string const & getType( void ) const; // Returns the materia type
		virtual AMateria* clone( void ) const = 0;
		virtual void use( ICharacter& target );
};

#endif