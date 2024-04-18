/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:28:30 by alvega-g          #+#    #+#             */
/*   Updated: 2024/04/18 11:53:28 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>

Cat::Cat( void ) {
	std::cout << "Default Cat constructor" << std::endl;
	type = "Cat";
	array = new Brain();
}

Cat::Cat( const Cat& source ) {
	std::cout << "Copy Cat constructor" << std::endl;
	type = source.type;
	array = new Brain(*source.array);
}

Cat& Cat::operator=( const Cat& source ) {
	std::cout << "Copy operator Cat" << std::endl;
	if (this != &source) {
		delete array;
		array = new Brain(*source.array);
		type = source.type;
	}
	return (*this);
}

Cat::~Cat( void ) {
	std::cout << "Cat destructor" << std::endl;
	delete array;
}

void Cat::makeSound( void ) const {
	std::cout << "Meow" << std::endl;
}