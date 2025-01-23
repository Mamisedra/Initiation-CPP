/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 14:51:49 by mranaivo          #+#    #+#             */
/*   Updated: 2025/01/23 15:46:40 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "header.hpp"

Dog::Dog( void )
{
	this->type = "Dog";
	std::cout << "The '"
		<< this->type
		<< "'animal type is created!"
		 << std::endl;
	return ;
}

Dog::~Dog( void )
{
	std::cout << "The '"
		<< this->type
		<< "' animal type is destroyed!"
		<< std::endl;
	return ;
}

Dog::Dog( const Dog & other ) : Animal(other)
{
	*this = other;
	std::cout << "The copy constructor of the '"
		<<this->type
		<< "' animal type is defined."
		<< std::endl;
}

Dog&	Dog::operator=( const Dog & other )
{
	Animal::operator=(other);
	this->type = type;
	std::cout << "The animal type '"
		<< this->type
		<< "' has an assignment operator."
		<< std::endl;
	return (*this);
}

void	Dog::makeSound( void ) const
{
	std::cout << "🐶 WoWoh OOH woOW !"
		<< std::endl;
}
