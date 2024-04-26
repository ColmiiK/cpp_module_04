/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:50:51 by alvega-g          #+#    #+#             */
/*   Updated: 2024/04/26 11:51:16 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <AMateria.hpp>

class Cure : public AMateria {
	public:
		Cure( void );
		virtual ~Cure( void );
		
		AMateria* clone( void ) const;
		void use( ICharacter &target );
};

#endif