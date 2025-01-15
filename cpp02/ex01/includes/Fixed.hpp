/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 14:20:26 by mranaivo          #+#    #+#             */
/*   Updated: 2025/01/15 12:32:46 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H__
# define __FIXED_H__

# include <iostream>
# include <ostream>
# include <cmath>

class Fixed
{
	public:

		Fixed( void );
		Fixed( int nbr );
		Fixed( const float nbr );
		Fixed( const Fixed &other);
		~Fixed( void );
		Fixed &operator=(const Fixed &other);
		float	toFloat( void ) const;
		int		toInt( void ) const;
		int		getRawBits( void ) const;

	private:
		int					_nbr;
		const static int	_bits=8;
};

std::ostream&	operator<<( std::ostream &o, const Fixed &other);

#endif
