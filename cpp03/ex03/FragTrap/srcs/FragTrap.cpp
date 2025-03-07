/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 12:50:32 by mranaivo          #+#    #+#             */
/*   Updated: 2025/03/07 09:50:42 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"
#include <string>

FragTrap::FragTrap( void )
{
	std::cout << "FragTrap default constructor Called .!" << std::endl;
	this->_name = "Undefined";
	this->_point = 100;
	this->_energy = 100;
	this->_attack = 30;
	return ;
}

FragTrap::FragTrap( std::string const & name) : ClapTrap(name)
{
	this->_point = 100;
	this->_energy = 100;
	this->_attack = 30;
	std::cout << "FragTrap constructor which name:"
		<< this->_name
		<< " is passed as parameter Called"
		<< std::endl;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap " << this->_name
		<< " destroyed!" << std::endl;
	return ;
}

FragTrap::FragTrap( FragTrap const & other ) : ClapTrap(other)
{
	std::cout << "FragTrap " << this->_name
		<< "call copy constructor" << std::endl;
	*this = other;
}

FragTrap&	FragTrap::operator=( FragTrap const & other )
{
	std::cout << "FragTrap " << this->_name
		<< " use asignement operator" << std::endl;
	ClapTrap::operator=(other);
	return (*this);
}

void	FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap " << getName()
		<< " request a high five..!"
		<< std::endl;
}
