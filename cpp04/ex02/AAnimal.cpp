/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 12:41:41 by mranaivo          #+#    #+#             */
/*   Updated: 2025/01/24 13:24:41 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "header.hpp"

AAnimal::AAnimal( void ) : type_("AnimalUndefined")
{
	std::cout << BLUE
		<< "Animal abstract created!"
		<< CLEAR << std::endl;
	return ;
}

AAnimal::~AAnimal( void )
{
	std::cout << BLUE
		<< "Animal abstract destroyed!"
		<< CLEAR << std::endl;
	return ;
}

AAnimal::AAnimal( const AAnimal & other )
{
	std::cout << BLUE
		<< "Animal abstract use copy contructor!"
		<< CLEAR << std::endl;
	*this = other;
}

AAnimal&	AAnimal::operator=( const AAnimal & other )
{
	std::cout << BLUE
		<< "Animal abstract use assignment operator!"
		<< CLEAR << std::endl;
	this->type_ = other.type_;
	return (*this);
}

std::string	AAnimal::getType( void ) const
{
	return (WHITE + this->type_ + CLEAR);
}
