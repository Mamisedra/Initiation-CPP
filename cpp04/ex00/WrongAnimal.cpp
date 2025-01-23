/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 16:40:22 by mranaivo          #+#    #+#             */
/*   Updated: 2025/01/23 16:50:18 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "header.hpp"

WrongAnimal::WrongAnimal( void ) : type("WrongUndefined")
{
	std::cout << "This is the WrongAnimal constructor." << std::endl;
	return ;
}

WrongAnimal::WrongAnimal( const WrongAnimal & other)
{
	*this = other;
	std::cout << "This is the WrongAnimal copy constructor!" << std::endl;
	return;
}

WrongAnimal&	WrongAnimal::operator=( const WrongAnimal & other )
{
	this->type = other.type;
	std::cout << "This is the assignment operator !" << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "This is the WrongAnimal destructor." << std::endl;
	return ;
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "I'm the "
		<< this->type
		<< std::endl;
}
