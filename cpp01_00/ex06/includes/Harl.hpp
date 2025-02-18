/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:59:33 by mranaivo          #+#    #+#             */
/*   Updated: 2025/01/13 14:56:44 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL_H__
# define __HARL_H__

# include <iostream>

class	Harl
{
	public :
		Harl( void );
		~Harl( void );
		void	complain( std::string level);

	private :
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
};

#endif
