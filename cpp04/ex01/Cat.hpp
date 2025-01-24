/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 13:29:07 by mranaivo          #+#    #+#             */
/*   Updated: 2025/01/24 09:46:13 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP__
# define __CAT_HPP__

# pragma once
# include "header.hpp"

class	Cat : public Animal
{
	public:

		Cat( void );
		Cat( const Cat & other );
		Cat	&operator=( const Cat & other );
		~Cat( void );
		void	makeSound( void ) const;

	protected:
	private:

		Brain	*_brain;
};

#endif
