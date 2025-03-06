/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 17:00:48 by mranaivo          #+#    #+#             */
/*   Updated: 2025/03/05 09:32:26 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"
#include <iostream>

Fixed	pointSomme(Point a, Point b, Point c)
{
	Fixed	somme;

	somme = (a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat())) + \
 			(b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat())) + \
 			(c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat()));
	return (somme);
}

Fixed	getSurface(Point const a, Point const b, Point const c)
{
	Fixed	surface;

	surface = pointSomme(a, b, c);
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
	if (acpSurface.absFixed() <= 0 || abpSurface.absFixed() <= 0 || bcpSurface.absFixed() <= 0)
		return (false);
	result = abcSurface.absFixed().toFloat() == (abpSurface.absFixed().toFloat() + \
	bcpSurface.absFixed().toFloat() + acpSurface.absFixed().toFloat());
	return (result);
}
