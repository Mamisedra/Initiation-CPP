/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 15:56:58 by mranaivo          #+#    #+#             */
/*   Updated: 2025/01/25 11:05:00 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER_HPP__
# define __CHARACTER_HPP__

# pragma once

# include "header.hpp"

class	Character : public ICharacter
{
	public:

		Character( void );
		Character( const std::string &name );
		~Character( void );
		Character( const Character & other );
		Character			&operator=( const Character & other );
		std::string const &	getName() const;
		void				equip( AMateria *m );
		void				unequip( int idx );
		void				use( int idx, ICharacter &target );

	private :

		std::string	_name;
		AMateria	*_inventaire[4];
};

#endif
