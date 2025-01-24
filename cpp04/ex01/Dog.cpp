/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 14:51:49 by mranaivo          #+#    #+#             */
/*   Updated: 2025/01/24 10:55:52 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "header.hpp"

Dog::Dog( void )
{
	this->type = "Dog";
	this->_brain = new Brain();
	std::cout << GREEN << "The '"
		<< this->type
		<< "'animal type is created!"
		 << CLEAR << std::endl;
	return ;
}

Dog::~Dog( void )
{
	std::cout << GREEN << "The '"
		<< this->type
		<< "' animal type is destroyed!"
		<< CLEAR << std::endl;
	delete _brain;
	return ;
}

Dog::Dog( const Dog & other ) : Animal(other)
{
	*this = other;
	std::cout << GREEN << "The copy constructor of the '"
		<<this->type
		<< "' animal type is defined."
		<< CLEAR << std::endl;
}

Dog&	Dog::operator=( const Dog & other )
{
	Animal::operator=(other);
	this->type = type;
	std::cout << GREEN << "The animal type '"
		<< this->type
		<< "' has an assignment operator."
		<< CLEAR << std::endl;
	return (*this);
}

void	Dog::makeSound( void ) const
{
	std::cout << GREEN << "🐶 WoWoh OOH woOW !"
		<< CLEAR << std::endl;
}
