/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 17:00:17 by mranaivo          #+#    #+#             */
/*   Updated: 2024/12/16 17:20:47 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  __ZOMBIE_H__
# define __ZOMBIE_H__

#include <string>
#include <iostream>

class	Zombie
{
	public:
		void	announce( void );
		Zombie( void );
		Zombie( std::string name );
		~Zombie( void );

	private:
		std::string	_name;

};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

# endif