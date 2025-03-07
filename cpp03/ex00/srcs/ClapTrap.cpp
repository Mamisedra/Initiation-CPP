/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 13:39:50 by mranaivo          #+#    #+#             */
/*   Updated: 2025/03/06 20:38:09 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap( void ) : _name("Undefined"),
_point(10), _energy(10), _attack(0)
{
	std::cout << "The default ClapTrap constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap( std::string name ) : _name(name),
_point(10), _energy(10), _attack(0)
{
	std::cout << "The ClapTrap constructor which name:"
		<< this->_name
		<< " is passed as parameter called" << std::endl;
	return ;
}


ClapTrap::~ClapTrap( void )
{
	std::cout << "The ClapTrap "
		<< this->_name
		<< " destroyed" << std::endl;
	return ;
}

ClapTrap::ClapTrap( ClapTrap  const & other )
{
	std::cout << "The ClapTrap constructor recopy called" << std::endl;
	*this = other;
}

ClapTrap&	ClapTrap::operator=( ClapTrap const & other)
{
	std::cout << "The ClapTrap operator affectation called" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_attack = other._attack;
		this->_energy = other._energy;
		this->_point = other._point;
	}
	return (*this);
}

std::string	ClapTrap::getName( void ) const
{
	return (this->_name);
}

int	ClapTrap::getPoint( void ) const
{
	return (this->_point);
}

int	ClapTrap::getEnergyPoint( void ) const
{
	return (this->_energy);
}

int	ClapTrap::getAttackDamage( void ) const
{
	return (this->_attack);
}

void	ClapTrap::setAttack( int const point )
{
	this->_attack = point;
}

void	ClapTrap::setEnergy( int const point)
{
	this->_energy = point;
}

void	ClapTrap::setPoint( int const point )
{
	this->_point = point;
}

void	ClapTrap::setName( std::string const name )
{
	this->_name = name;
}

void	ClapTrap::attack( std::string const & target)
{
	if (this->_energy >= 0 && this->_point >= 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks "
			<< target << ", causing " << this->_attack
			<< " points of damage!" << std::endl;
		this->_energy--;
	}
	else if (this->_energy <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " doesn't have enough energy to"
			<< " attack " << target << ".!" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " is DEAD and cannot attack!"
			<< std::endl;
	}
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (this->_point > 0)
	{
		std::cout << "ClapTrap " << this->_name << " takes " << amount << " of Damage.!"
			<< std::endl;
		this->_point -= amount;
	}
	if (this->_point <= 0)
	{
		this->_point = 0;
		std::cout << "ClapTrap " << this->_name
			<< " has " << this->_point
			<< " points—she's finished, she's dead!"
		<< std::endl;
	}
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (this->_energy > 0 && this->_point > 0)
	{
		std::cout << "ClapTrap " << this->_name << " be repaired " << std::endl;
		this->_energy--;
		this->_point += amount;
	}
	else if (this->_energy <= 0)
	{
		this->_energy = 0;
		std::cout << "ClapTrap " << this->_name << " doesn't have enough energy to"
			<< " repair.!" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " is DEAD and cannot be repaired!"
			<< std::endl;
	}
}
