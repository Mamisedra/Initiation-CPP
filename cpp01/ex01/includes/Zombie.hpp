/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:43:27 by mranaivo          #+#    #+#             */
/*   Updated: 2024/12/18 09:58:30 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_H__
# define __ZOMBIE_H__

#include <iostream>
class	Zombie
{
	public:
		void		announce() const;
		Zombie( std::string name );
		Zombie( void );
		~Zombie( void );
	private:
		std::string	_name;
};

Zombie*	zombieHorde ( int N, std::string Name );

#endif