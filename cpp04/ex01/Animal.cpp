/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 14:09:13 by mranaivo          #+#    #+#             */
/*   Updated: 2025/01/24 10:51:21 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

Animal::Animal( void ) : type("Undefined")
{
	std::cout << BLUE << "This is constructor for the Animal"
		<< CLEAR << std::endl;
	return ;
}

Animal::~Animal( void )
{
	std::cout << BLUE << "This is destructor for the Animal"
		<< CLEAR << std::endl;
	return ;
}

Animal::Animal( const Animal & other)
{
	*this = other;
	std::cout << BLUE <<"This is the copy constructor for the Animal"
		<< CLEAR << std::endl;
}

Animal&	Animal::operator=( const Animal & other )
{
	this->type = other.type;
	std::cout << BLUE << "This is the assignment operator for the Animal"
		<< CLEAR << std::endl;
	return (*this);
}

std::string	Animal::getType( void ) const
{
	return (BLUE + this->type + CLEAR);
}

void	Animal::makeSound( void ) const
{
	std::cout << BLUE << "I'm an " << this->type
		<< " animal " << CLEAR << std::endl;
}
