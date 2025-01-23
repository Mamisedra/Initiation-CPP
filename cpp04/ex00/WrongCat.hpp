/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 16:22:17 by mranaivo          #+#    #+#             */
/*   Updated: 2025/01/23 16:30:37 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGCAT_HPP__
# define __WRONGCAT_HPP__

# pragma once
# include "header.hpp"

class	WrongCat : public WrongAnimal
{
	public :

		WrongCat( void );
		WrongCat( const WrongCat & other );
		WrongCat	&operator=( const WrongCat & other );
		~WrongCat( void );
};
#endif
