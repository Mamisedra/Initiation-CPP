/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 13:33:57 by mranaivo          #+#    #+#             */
/*   Updated: 2025/01/16 15:04:39 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_HPP__
# define __CLAPTRAP_HPP__

# include <iostream>
#include <string>

class	ClapTrap
{
	public :

		ClapTrap( void );
		~ClapTrap( void );
		ClapTrap( ClapTrap const & other);
		ClapTrap&	operator=( ClapTrap const & other);
		std::string	getName( void ) const;
		int			getPoint( void ) const;
		int			getEnergyPoint( void ) const;
		int			getAttackDamage( void ) const;
		void		setEnergy( int point );
		void		setPoint( int point );
		void		setAttack( int point );
		void		setName( std::string const name);
		void		attack( std::string const & target );
		void		takeDamage( unsigned int amount );
		void		beRepaired( unsigned int amount );

	private :

		std::string	_name;
		int			_point;
		int			_energy;
		int			_attack;

};

#endif
