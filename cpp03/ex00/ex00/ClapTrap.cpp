/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 13:39:50 by mranaivo          #+#    #+#             */
/*   Updated: 2025/01/16 15:03:42 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _name(""),
_attack(0), _energy(10), _point(10)
{
	return ;
}

ClapTrap::~ClapTrap( void )
{
	return ;
}

ClapTrap::ClapTrap( ClapTrap  const & other )
{
	*this = other;
}

ClapTrap&	ClapTrap::operator=( ClapTrap const & other )
{
	if (_attack != other._attack)
		this->_attack = other._attack;
	if (_energy != other._energy)
		this->_energy = other._energy;
	if (_point != other._point)
		this->_point = other._point;
	return (*this);
}

int	ClapTrap::getPoint( void ) const
{
	return (this->_point);
}

int	ClapTrap::getAttackDamage( void ) const
{
	return (this->_attack);
}

int	ClapTrap::getEnergyPoint( void ) const
{
	return (this->_energy);
}

std::string	ClapTrap::getName( void ) const
{
	return (this->_name);
}

void	ClapTrap::setName( const std::string name )
{
	this->_name = name;
}

void	ClapTrap::setAttack( int point )
{
	this->_attack = point;
}

void	ClapTrap::setEnergy( int point )
{
	this->_energy = point;
}


void	ClapTrap::setPoint( int point )
{
	this->_point = point;
}

void	ClapTrap::attack( std::string const & target)
{}

void	ClapTrap::takeDamage( unsigned int amount )
{}

void	ClapTrap::beRepaired( unsigned int amount )
{}
