/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 14:09:13 by mranaivo          #+#    #+#             */
/*   Updated: 2025/01/23 15:12:07 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "header.hpp"

Animal::Animal( void ) : type("Undefined")
{
	std::cout << "This is constructor for the Animal"
		<< std::endl;
	return ;
}

Animal::~Animal( void )
{
	std::cout << "This is destructor for the Animal"
		<< std::endl;
	return ;
}

Animal::Animal( const Animal & other)
{
	*this = other;
	std::cout << "This is the copy constructor for the Animal"
		<< std::endl;
}

Animal&	Animal::operator=( const Animal & other )
{
	this->type = other.type;
	std::cout << "This is the assignment operator for the Animal"
		<< std::endl;
	return (*this);
}

std::string	Animal::getType( void ) const
{
	return (this->type);
}

void	Animal::makeSound( void ) const
{
	std::cout << "I'm an " << this->type
		<< " animal " << std::endl;
}
