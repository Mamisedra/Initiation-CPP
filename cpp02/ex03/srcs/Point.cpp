/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 17:00:41 by mranaivo          #+#    #+#             */
/*   Updated: 2025/01/16 12:02:27 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

Point::Point( void ) : _x(0), _y(0)
{
	return ;
}

Point::Point( const float x, const float y ) :
_x(x), _y(y)
{
	return ;
}

Point::Point( const Point & other )
{
	*this = other;
	return ;
}

Point::~Point( void )
{
	return ;
}

Point&	Point::operator=( const Point & other )
{
	if (this != &other)
	{
		const_cast<Fixed&>(this->_x) = other._x;
		const_cast<Fixed&>(this->_y) = other._y;
	}
	return (*this);
}

Fixed	Point::getX( void )
{
	return (this->_x);
}

Fixed	Point::getY( void )
{
	return (this->_y);
}
