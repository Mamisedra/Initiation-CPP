/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 16:23:34 by mranaivo          #+#    #+#             */
/*   Updated: 2025/01/23 16:29:07 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGANIMAL_HPP__
# define __WRONGANIMAL_HPP__

# pragma once
# include <string>

class	WrongAnimal
{
	public :

		WrongAnimal( void );
		WrongAnimal( const WrongAnimal & other );
		WrongAnimal	&operator=( const WrongAnimal & other);
		virtual ~WrongAnimal( void );
		void	makeSound() const;

	protected:

		std::string	type;
};
#endif
