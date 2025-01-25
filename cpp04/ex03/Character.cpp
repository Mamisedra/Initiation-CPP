/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 16:07:54 by mranaivo          #+#    #+#             */
/*   Updated: 2025/01/25 11:16:02 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

Character::Character( void )
{
	for (int i = 0; i < 4; i++)
		this->_inventaire[i] = NULL;
	return ;
}

Character::Character( const std::string &name ) : _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_inventaire[i] = NULL;
	return ;
}

Character::~Character( void )
{
	for (int i = 0; i < 4; i++)
	{
		delete this->_inventaire[i];
	}
	return ;
}

Character	&Character::operator=( const Character & other )
{
	this->_name = other._name;
	for (int i = 0; i < 4 && this->_inventaire[i] != NULL; i++)
	{
		delete this->_inventaire[i];
		this->_inventaire[i] = other._inventaire[i];
	}
	return (*this);
}

Character::Character( const Character & other )
{
	*this = other;
}

std::string const	&Character::getName( void ) const
{
	return (this->_name);
}

void	Character::equip( AMateria *m )
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventaire[i] == NULL)
		{
			this->_inventaire[i] = m;
			break ;
		}
	}
}

void	Character::unequip( int idx )
{
	if (idx >= 0 && idx < 4)
	{
		this->_inventaire[idx] = NULL;
	}
}

void	Character::use( int idx, ICharacter &target )
{
	if (idx >= 0 && idx < 4)
		this->_inventaire[idx]->use(target);
}

