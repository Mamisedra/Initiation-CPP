/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:06:51 by mranaivo          #+#    #+#             */
/*   Updated: 2025/01/21 13:01:27 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"
#include <iostream>
#include <string>

ScavTrap::ScavTrap( void )
{
	std::cout << "ScavTrap default constructor called!" << std::endl;
	return ;
}

ScavTrap::ScavTrap( std::string name) : ClapTrap(name)
{
	ClapTrap::setPoint(100);
	ClapTrap::setAttack(20);
	ClapTrap::setEnergy(50);
	std::cout << "The ClapTrap " << name << " constructed at ScavTap constuctor!" << std::endl;
	return ;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap" << getName() << "destroyed" << std::endl;
	return ;
}

ScavTrap&	ScavTrap::operator=( ScavTrap const &other )
{
	ClapTrap::operator=(other);
	return (*this);
}

ScavTrap::ScavTrap( ScavTrap const & other ) : ClapTrap(other)
{
	std::cout << "Constructor recopy ScavTrap called !" << std::endl;
	*this = other;
}

void	ScavTrap::attack( std::string target )
{
	std::cout << "ScavTrap " << this->_name;
	this->attackMember(target);
}

void	ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap " << this->_name
		<< " is now in Gate keeper mode." << std::endl;
}
