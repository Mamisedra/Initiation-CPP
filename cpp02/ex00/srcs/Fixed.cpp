/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 10:46:13 by mranaivo          #+#    #+#             */
/*   Updated: 2025/02/20 15:36:41 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed( void ) : _nbr(0 << _bits)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed( const Fixed& other ) :
_nbr(other._nbr)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=( const Fixed &other )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (_nbr != other.getRawBits())
		this->setRawBits(other.getRawBits());
	return (*this);
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_nbr);
}

void	Fixed::setRawBits( const int raw )
{
	std::cout << this->_nbr << std::endl;
	this->_nbr = raw;
}
