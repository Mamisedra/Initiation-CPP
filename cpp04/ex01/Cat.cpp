/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 13:47:29 by mranaivo          #+#    #+#             */
/*   Updated: 2025/01/24 10:54:36 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

Cat::Cat( void )
{
	this->type = "Cat";
	this->_brain = new Brain();
	std::cout << WHITE << "The constutor animal "
		<< this->type << " is called !"
		<< CLEAR << std::endl;
}

Cat::~Cat( void )
{
	std::cout << WHITE << "The destructor animal type "
		<< this->type << " is called !"
		<< CLEAR << std::endl;
	delete _brain;
}

Cat::Cat( const Cat & other ) : Animal(other)
{
	*this = other;
	std::cout << WHITE << "The recopy constructor type "
		<< this->type << " is called !"
		<< CLEAR << std::endl;
}

Cat&	Cat::operator=( const Cat & other )
{
	Animal::operator=(other);
	this->type = other.type;
	std::cout << WHITE << "The asignment operator type "
		<< this->type << " is called !"
		<< CLEAR << std::endl;
	return (*this);
}

void	Cat::makeSound( void ) const
{
	std::cout << WHITE << "😺 Meouww meouww meouww !!"
		<< CLEAR << std::endl;
}
