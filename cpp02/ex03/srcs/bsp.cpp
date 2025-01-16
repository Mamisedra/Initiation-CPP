/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 17:00:48 by mranaivo          #+#    #+#             */
/*   Updated: 2025/01/16 12:19:38 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"
#include <iostream>

Fixed	pointProduct(Point a, Point b, Point c)
{
	Fixed	result_x;
	Fixed	result_y;

	result_x = a.getX().toFloat() - c.getX().toFloat();
	result_y = b.getY().toFloat() - c.getY().toFloat();
	return (result_x * result_y);
}

Fixed	getSurface(Point const a, Point const b, Point const c)
{
	Fixed	surface;

	surface = pointProduct(a, b, c).toFloat() - pointProduct(b, a, c).toFloat();
	surface = surface.toFloat() * (0.5f);
	return (surface.toFloat());
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	abcSurface;
	Fixed	abpSurface;
	Fixed	bcpSurface;
	Fixed	acpSurface;
	bool	result;

	abcSurface = getSurface(a,  b,  c).toFloat();
	abpSurface = getSurface(a, b, point).toFloat();
	bcpSurface = getSurface(b, c, point).toFloat();
	acpSurface = getSurface(a, c, point).toFloat();
	result = abcSurface.absFixed().toFloat() == (abpSurface.absFixed().toFloat() + \
	bcpSurface.absFixed().toFloat() + acpSurface.absFixed().toFloat());
	return (result);
}
