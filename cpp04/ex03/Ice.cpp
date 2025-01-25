/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 15:34:04 by mranaivo          #+#    #+#             */
/*   Updated: 2025/01/25 09:11:33 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

Ice::Ice( void )
{
	this->type_ = "ice";
	return ;
}

Ice::~Ice( void )
{
	return ;
}

Ice	&Ice::operator=( const Ice & other )
{
	AMateria::operator=(other);
	this->type_ = other.type_;
	return (*this);
}

Ice::Ice( const Ice & other ) : AMateria(other)
{
	*this = other;
}

AMateria	*Ice::clone( void ) const
{
	return (new Ice());
}

void	Ice::use( ICharacter & target )
{
	std::cout << "* shoots an ice bolt at "
		<< target.getName() << " *"
		<< std::endl;
}
