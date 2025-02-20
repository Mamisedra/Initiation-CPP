/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 10:43:15 by mranaivo          #+#    #+#             */
/*   Updated: 2025/02/20 15:37:21 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H__
# define __FIXED_H__

# include <iostream>

class	Fixed
{

	public	:

		Fixed( void );
		~Fixed( void );
		Fixed( const Fixed& other );
		Fixed &operator=(Fixed const &other);
		int					getRawBits( void ) const;
		void				setRawBits( int const raw );

	private	:

		int					_nbr;
		static const int	_bits=8;

};

#endif
