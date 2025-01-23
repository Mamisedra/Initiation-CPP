/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 13:47:29 by mranaivo          #+#    #+#             */
/*   Updated: 2025/01/23 15:12:16 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

Cat::Cat( void )
{
	this->type = "Cat";
	std::cout << "The constutor animal "
		<< this->type << " is called !"
		<< std::endl;
}

Cat::~Cat( void )
{
	std::cout << "The destructor animal type "
		<< this->type << " is called !"
		<< std::endl;
}

Cat::Cat( const Cat & other ) : Animal(other)
{
	*this = other;
	std::cout << "The recopy constructor type "
		<< this->type << " is called !"
		<< std::endl;
}

Cat&	Cat::operator=( const Cat & other )
{
	Animal::operator=(other);
	this->type = other.type;
	std::cout << "The asignment operator type "
		<< this->type << " is called !"
		<< std::endl;
	return (*this);
}

void	Cat::makeSound( void ) const
{
	std::cout << "😺 Meouww meouww meouww !!"
		<< std::endl;
}
