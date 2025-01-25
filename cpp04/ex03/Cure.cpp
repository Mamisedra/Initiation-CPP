/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 15:45:19 by mranaivo          #+#    #+#             */
/*   Updated: 2025/01/25 10:17:48 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

Cure::Cure( void )
{
	this->type_ = "cure";
	return ;
}

Cure::~Cure( void )
{
	return ;
}

Cure	&Cure::operator=( const Cure & other )
{
	AMateria::operator=(other);
	this->type_ = other.type_;
	return (*this);
}

Cure::Cure( const Cure & other ) : AMateria(other)
{
	*this = other;
}

AMateria	*Cure::clone( void ) const
{
	return (new Cure());
}

void	Cure::use( ICharacter & target )
{
	std::cout << "* heals " << target.getName()
		<< "'s wounds *" << std::endl;
}
