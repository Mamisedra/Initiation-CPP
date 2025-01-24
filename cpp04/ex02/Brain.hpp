/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 09:40:09 by mranaivo          #+#    #+#             */
/*   Updated: 2025/01/24 10:39:42 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_HPP__
# define __BRAIN_HPP__

# pragma once
# include <string>

class	Brain
{
	public:

		Brain( void );
		Brain( const Brain & other );
		Brain	&operator=( const Brain & other );
		~Brain( void );
		void	setBrainContent( int id, std::string content );
	private:
		std::string	_ideas[100];
};

#endif
