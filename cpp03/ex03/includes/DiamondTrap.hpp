/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 13:42:48 by mranaivo          #+#    #+#             */
/*   Updated: 2025/03/07 02:05:19 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMONDTRAP_HPP__
# define __DIAMONDTRAP_HPP__

# include "../FragTrap/includes/FragTrap.hpp"
# include "../ScavTrap/includes/ScavTrap.hpp"
#include <string>

class	DiamondTrap : public FragTrap, public ScavTrap
{
	public :

		DiamondTrap( void );
		~DiamondTrap( void );
		DiamondTrap( std::string const & name );
		DiamondTrap( DiamondTrap const & other );
		DiamondTrap	&operator=( DiamondTrap const & other );
		void		whoAmI( void );
		void		attack( std::string const & target );
		void		classAttribut( void );

	private :

		std::string	_name;

};
#endif
