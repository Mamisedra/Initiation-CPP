/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 15:56:58 by mranaivo          #+#    #+#             */
/*   Updated: 2025/01/24 16:09:39 by mranaivo         ###   ########.fr       */
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
		Character( std::string name );
		~Character( void );
		Character( const Character & other );
		Character			&operator=( const Character & other );
		void				equip( AMateria *m);
		void				unequip( int idx );
		void				use( int idx, ICharacter &target );
		std::string const &	getName() const;

	private :

		std::string	_name;
};
#endif
