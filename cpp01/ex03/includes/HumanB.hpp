/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:48:44 by mranaivo          #+#    #+#             */
/*   Updated: 2024/12/18 13:29:06 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMAN_B_H__
# define __HUMAN_B_H__

#include <iostream>
#include "../includes/Weapon.hpp"

class	HumanB
{
	public:

		HumanB( std::string name);
		HumanB( void );
		~HumanB( void );
		void	attack( void );
		void	setWeapon( Weapon& weapon );

	private:
		std::string	_name;
		Weapon*		_weapon;
};

#endif