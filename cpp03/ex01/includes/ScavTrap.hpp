/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:00:41 by mranaivo          #+#    #+#             */
/*   Updated: 2025/01/21 11:50:01 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP_HPP__
# define __SCAVTRAP_HPP__

# include "../ClapTrap/includes/ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public :

		ScavTrap( void );
		ScavTrap( std::string name );
		ScavTrap( ScavTrap const & other);
		ScavTrap&	operator=( ScavTrap const & other );
		~ScavTrap( void );
		void	guardGate( void );
		void	attack( std::string target );

};

#endif
