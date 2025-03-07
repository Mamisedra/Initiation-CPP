/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:48:55 by mranaivo          #+#    #+#             */
/*   Updated: 2024/12/18 12:54:37 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"
#include <string>

Weapon::Weapon( void )
{
	return ;
}

Weapon::Weapon( std::string type ): _type( type )
{
	return ;
}

Weapon::~Weapon( void )
{
	return ;
}

const std::string&	Weapon::getType() const
{
	return (this->_type);
}

void	Weapon::setType( std::string type)
{
	_type = type;
}