/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 16:21:28 by mranaivo          #+#    #+#             */
/*   Updated: 2025/01/23 16:40:01 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

WrongCat::WrongCat( void )
{
	this->type = "WrongCat";
	std::cout << "The Wronganimal '"
		<< this->type
		<< "' call the own constructor"
		<< std::endl;
	return ;
}

WrongCat::~WrongCat( void )
{
	this->type = "WrongCat";
	std::cout << "The Wronganimal '"
		<< this->type
		<< "' call the own destructor"
		<< std::endl;
	return ;
}

WrongCat::WrongCat( const WrongCat & other) : WrongAnimal(other)
{
	*this = other;
	std::cout << "The Wronganimal '"
		<< this->type
		<< "' as type call the copy constructor"
		<< std::endl;
}

WrongCat&	WrongCat::operator=( const WrongCat & other )
{
	WrongAnimal::operator=(other);
	this->type = other.type;
	std::cout << "The Wronganimal '"
		<< this->type
		<< "' use the operator assigment ."
		<< std::endl;
	return (*this);
}
