/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:17:41 by alvega-g          #+#    #+#             */
/*   Updated: 2024/04/26 11:41:56 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <iostream>
# include <ICharacter.hpp>

class AMateria {
	protected:
		std::string _type;
	public:
		AMateria( void );
		~AMateria( void );
		AMateria( const AMateria &source );
		AMateria& operator=( const AMateria &source );
		AMateria( std::string const & type );
		std::string const & getType( void ) const; // Returns the materia type
		virtual AMateria* clone( void ) const = 0;
		virtual void use( ICharacter& target );
};

#endif