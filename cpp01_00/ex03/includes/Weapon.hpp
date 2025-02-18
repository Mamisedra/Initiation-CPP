/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:48:39 by mranaivo          #+#    #+#             */
/*   Updated: 2024/12/18 12:54:42 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_H__
# define __WEAPON_H__

# include <iostream>
#include <string>

class	Weapon
{
	public:

		const std::string&	getType() const;
		void				setType( std::string type );
		Weapon( void );
		Weapon( std::string type );
		~Weapon( void );

	private:

		std::string	_type;

};

#endif