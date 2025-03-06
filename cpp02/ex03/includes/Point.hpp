/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 16:55:22 by mranaivo          #+#    #+#             */
/*   Updated: 2025/01/16 11:26:52 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __POINT_HPP__
# define __POINT_HPP__

# include "../includes/Fixed.hpp"

class Point
{
	public :

		Point( void );
		Point( const float x, const float y);
		Point(const Point & other);
		Point&	operator=(const Point & other);
		~Point( void );
		Fixed	getX( void );
		Fixed	getY( void );

	private :

		Fixed const	_x;
		Fixed const	_y;

};

bool	bsp( Point const a, Point const b, Point const c, Point const point);

#endif
