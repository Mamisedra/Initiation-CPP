/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 16:53:47 by mranaivo          #+#    #+#             */
/*   Updated: 2025/01/16 11:45:51 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"
#include <ostream>

Fixed::Fixed( void ) : _nbr(0)
{
	return ;
}

Fixed::~Fixed( void )
{
	return ;
}

Fixed::Fixed( const int nbr) : _nbr(nbr << _bits)
{
	return ;
}

Fixed::Fixed( const float nbr)
{
	_nbr = static_cast<int>(roundf(nbr * (1 << _bits)));
	return ;
}

Fixed::Fixed( const Fixed & other )
{
	*this = other;
	return ;
}

Fixed&	Fixed::operator=(const Fixed & other)
{
	if (this != &other)
	{
		this->_nbr = other._nbr;
	}
	return (*this);
}

Fixed&	Fixed::operator++( void )
{
	_nbr++;
	return (*this);
}

Fixed	Fixed::operator++( int )
{
	Fixed	temp = *this;
	_nbr++;
	return (temp);
}

Fixed&	Fixed::operator--( void )
{
	_nbr--;
	return (*this);
}

Fixed	Fixed::operator--( int )
{
	Fixed	temp = *this;

	_nbr--;
	return (temp);
}

Fixed	Fixed::operator+( const Fixed & other ) const
{
	return (Fixed(_nbr + other._nbr));
}

Fixed	Fixed::operator-( const Fixed & other ) const
{
	return (Fixed(_nbr - other._nbr));
}

Fixed	Fixed::operator*( const Fixed & other ) const
{
	return (Fixed(this->toFloat() * (other.toFloat())));
}

Fixed	Fixed::operator/( const Fixed & other ) const
{
	return (Fixed(_nbr / other._nbr));
}

Fixed&	Fixed::min( Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

Fixed	Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b ? a : b);
}

Fixed&	Fixed::max( Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

Fixed	Fixed::max( const Fixed &a, const Fixed &b)
{
	return (a > b ? a : b);
}

bool	Fixed::operator!=( const Fixed & other) const
{
	return (_nbr != other._nbr);
}

bool	Fixed::operator==( const Fixed & other) const
{
	return (_nbr == other._nbr);
}

bool	Fixed::operator>=( const Fixed & other) const
{
	return (_nbr >= other._nbr);
}

bool	Fixed::operator<=( const Fixed & other) const
{
	return (_nbr <= other._nbr);
}

bool	Fixed::operator<( const Fixed & other) const
{
	return (_nbr < other._nbr);
}

bool	Fixed::operator>( const Fixed & other) const
{
	return (_nbr > other._nbr);
}

float	Fixed::toFloat( void ) const
{
	return (static_cast<float>(_nbr) / (1 << _bits));
}

int	Fixed::toInt( void ) const
{
	return (_nbr >> _bits);
}

std::ostream&	operator<<(std::ostream &o, const Fixed & other)
{
	o << other.toFloat();
	return (o);
}

Fixed&	Fixed::absFixed( void )
{
	if (this->_nbr < 0)
		this->_nbr *= -1;
	return (*this);
}
