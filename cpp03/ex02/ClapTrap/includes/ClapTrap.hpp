/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 13:33:57 by mranaivo          #+#    #+#             */
/*   Updated: 2025/03/07 09:42:13 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_HPP__
# define __CLAPTRAP_HPP__

# include <string>
# include <iostream>

class	ClapTrap
{
	public :

		ClapTrap( void );
		ClapTrap( std::string name );
		~ClapTrap( void );
		ClapTrap( ClapTrap const & other);
		ClapTrap&	operator=( ClapTrap const & other);
		std::string	getName( void ) const;
		int			getPoint( void ) const;
		int			getEnergyPoint( void ) const;
		int			getAttackDamage( void ) const;
		void		setEnergy( int const point );
		void		setPoint( int const point );
		void		setAttack( int const point );
		void		setName( std::string const name);
		void		attack( std::string const & target );
		void		takeDamage( unsigned int amount );
		void		beRepaired( unsigned int amount );

	protected :

		std::string	_name;
		int			_point;
		int			_energy;
		int			_attack;
		void		_attackMember( std::string const & target );
};

#endif
