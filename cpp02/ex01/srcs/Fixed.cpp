/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:00:54 by mranaivo          #+#    #+#             */
/*   Updated: 2025/01/15 12:59:59 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"
#include <ostream>

Fixed::Fixed( void )
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( const int nbr) :
_nbr(nbr << _bits)
{
	std::cout << "Int constructor called " << std::endl;
}

Fixed::Fixed( const float nbr)
{
	_nbr = static_cast<int>(roundf(nbr * (1 << _bits)));
	std::cout << "Float constructor called " << std::endl;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed( const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

std::ostream&	operator<<(std::ostream& o, const Fixed& other)
{
	o << other.toFloat();
	return (o);
}

Fixed&	Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (_nbr != other.getRawBits())
	{
		_nbr = other.getRawBits();
	}
	return (*this);
}

float	Fixed::toFloat( void ) const
{
	return (static_cast<float>(_nbr) / (1 << _bits));
}

int	Fixed::toInt( void ) const
{
	return (_nbr >> _bits);
}

int	Fixed::getRawBits( void ) const
{
	return (this->_nbr);
}
