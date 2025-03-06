/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 13:36:49 by mranaivo          #+#    #+#             */
/*   Updated: 2025/01/16 11:45:40 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
# define __FIXED_HPP__

# include <iostream>
# include <ostream>
# include <cmath>

class	Fixed
{
	public :

		Fixed( void );
		Fixed( const int nbr );
		Fixed( const float nbr );
		Fixed( const Fixed & other );
		~Fixed( void );
		Fixed&			operator=( const Fixed &other );
		Fixed&			operator++( void );
		Fixed			operator++( int );
		Fixed&			operator--( void );
		Fixed			operator--( int );
		Fixed			operator+( const Fixed & other ) const;
		Fixed			operator-( const Fixed & other ) const;
		Fixed			operator*( const Fixed & other ) const;
		Fixed			operator/( const Fixed & other ) const;
		bool			operator!=( const Fixed & other ) const;
		bool			operator<( const Fixed & other ) const;
		bool			operator>( const Fixed & other ) const;
		bool			operator>=( const Fixed & other ) const;
		bool			operator<=( const Fixed & other ) const;
		bool			operator==( const Fixed & other ) const;
		float			toFloat( void ) const;
		int				toInt( void ) const;
		static Fixed&	min( Fixed &a, Fixed &b);
		static Fixed	min( const Fixed &a, const Fixed &b);
		static Fixed&	max( Fixed &a, Fixed &b);
		static Fixed	max( const Fixed &a, const Fixed &b);
		Fixed&			absFixed( void );

	private :
		int					_nbr;
		const static int	_bits=8;
};

std::ostream&	operator<<(std::ostream &o, const Fixed & other);

#endif
