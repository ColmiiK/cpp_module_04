/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:52:39 by alvega-g          #+#    #+#             */
/*   Updated: 2024/04/17 16:28:35 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <Animal.hpp>
# include <iostream>

class Cat : public Animal {
	public:
		Cat( void );
		Cat( const Cat& source );
		Cat& operator=( const Cat& source );
		~Cat( void );
		void makeSound( void ) const;
};

#endif