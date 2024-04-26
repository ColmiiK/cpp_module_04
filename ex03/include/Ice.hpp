/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:21:44 by alvega-g          #+#    #+#             */
/*   Updated: 2024/04/26 11:50:24 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <AMateria.hpp>

class Ice : public AMateria {
	public:
		Ice( void );
		virtual ~Ice( void );
		
		AMateria* clone( void ) const;
		void use( ICharacter &target );
};

#endif