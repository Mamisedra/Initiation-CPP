/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:00:29 by mranaivo          #+#    #+#             */
/*   Updated: 2025/01/24 13:10:33 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

Cat::Cat( void )
{
	this->type_ = "Cat";
	this->_brain = new Brain();
	std::cout << WHITE << "The constutor animal "
		<< this->type_ << " is called !"
		<< CLEAR << std::endl;
}

Cat::~Cat( void )
{
	std::cout << WHITE << "The destructor animal type "
		<< this->type_ << " is called !"
		<< CLEAR << std::endl;
	delete _brain;
}

Cat::Cat( const Cat & other ) : AAnimal(other)
{
	*this = other;
	std::cout << WHITE << "The recopy constructor type "
		<< this->type_ << " is called !"
		<< CLEAR << std::endl;
}

Cat&	Cat::operator=( const Cat & other )
{
	AAnimal::operator=(other);
	this->type_ = other.type_;
	std::cout << WHITE << "The asignment operator type "
		<< this->type_ << " is called !"
		<< CLEAR << std::endl;
	return (*this);
}

void	Cat::makeSound( void ) const
{
	std::cout << WHITE << "😺 Meouww meouww meouww !!"
		<< CLEAR << std::endl;
}
