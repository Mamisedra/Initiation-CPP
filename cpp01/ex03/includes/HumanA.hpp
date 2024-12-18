/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:48:47 by mranaivo          #+#    #+#             */
/*   Updated: 2024/12/18 12:58:39 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMAN_A_H__
# define __HUMAN_A_H__

#include <iostream>
#include "../includes/Weapon.hpp"
class	HumanA
{
	public:

		HumanA( void );
		~HumanA( void );
		HumanA( std::string name, Weapon& weapon );
		void	attack( void );
	private:

		std::string	_name;
		Weapon&		_weapon;
};

#endif