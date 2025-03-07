/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 14:27:31 by mranaivo          #+#    #+#             */
/*   Updated: 2025/03/07 03:26:27 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void )
{
	return ;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "The DiamonTrap " << this->_name
			<< " destroyed!" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap( std::string const & name )
: ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
	this->_name = name;
	this->_point = FragTrap::_point;
	this->_energy = 50;
	this->_attack = 30;
	std::cout << "DiamondTrap constructor which name:"
		<< this->_name
		<< " is passed as parameter Called"
		<< std::endl;
}

DiamondTrap::DiamondTrap( DiamondTrap const & other )
: ClapTrap(other), FragTrap(other), ScavTrap(other)
{
	*this = other;
}

DiamondTrap&	DiamondTrap::operator=( DiamondTrap const & other )
{
	ClapTrap::operator=(other);
	return (*this);
}

void	DiamondTrap::attack( std::string const & target )
{
	ScavTrap::attack(target);
}

void	DiamondTrap::classAttribut( void )
{
	std::cout << "DiamondTrap name " << this->_name << std::endl;
	std::cout << "ClapTrap name " << ClapTrap::_name << std::endl;
	std::cout << "FragTrap name " << FragTrap::_name << std::endl;
	std::cout << "ScavTrap name " << ScavTrap::_name << std::endl;
	std::cout << "ClapTrap point " << getPoint() << std::endl;
	std::cout << "ClapTrap energy " <<  getEnergyPoint() << std::endl;
	std::cout << "ClapTrap attack " << getAttackDamage() << std::endl;
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << "DiamondTrap name is "
		<< this->_name
		<< std::endl;
	std::cout << "ClapTrap name is "
		<< ClapTrap::_name
		<< std::endl;
}
