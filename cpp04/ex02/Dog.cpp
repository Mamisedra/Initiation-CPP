/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:14:58 by mranaivo          #+#    #+#             */
/*   Updated: 2025/01/24 13:16:29 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

Dog::Dog( void )
{
	this->type_ = "Dog";
	this->_brain = new Brain();
	std::cout << GREEN << "The '"
		<< this->type_
		<< "'animal type is created!"
		 << CLEAR << std::endl;
	return ;
}

Dog::~Dog( void )
{
	std::cout << GREEN << "The '"
		<< this->type_
		<< "' animal type is destroyed!"
		<< CLEAR << std::endl;
	delete _brain;
	return ;
}

Dog::Dog( const Dog & other ) : AAnimal(other)
{
	*this = other;
	std::cout << GREEN << "The copy constructor of the '"
		<<this->type_
		<< "' animal type is defined."
		<< CLEAR << std::endl;
}

Dog&	Dog::operator=( const Dog & other )
{
	AAnimal::operator=(other);
	this->type_ = type_;
	std::cout << GREEN << "The animal type '"
		<< this->type_
		<< "' has an assignment operator."
		<< CLEAR << std::endl;
	return (*this);
}

void	Dog::makeSound( void ) const
{
	std::cout << GREEN << "🐶 WoWoh OOH woOW !"
		<< CLEAR << std::endl;
}
