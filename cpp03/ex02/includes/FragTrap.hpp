/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 12:07:03 by mranaivo          #+#    #+#             */
/*   Updated: 2025/03/07 00:47:24 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_HPP__
# define __FRAGTRAP_HPP__

# include <iostream>
# include "../ClapTrap/includes/ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	public :

		FragTrap( void );
		~FragTrap( void );
		FragTrap( std::string const & name );
		FragTrap( FragTrap const & other );
		FragTrap&	operator=( FragTrap const & other );
		void		highFivesGuys( void );
};
#endif
