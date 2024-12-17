/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 12:22:53 by mranaivo          #+#    #+#             */
/*   Updated: 2024/12/17 14:57:01 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONTACT_H__
# define __CONTACT_H__

# include <iostream>
# include <string>

class Contact
{
	public:

		Contact 	( void );
		~Contact 	( void );
		std::string	get_name(int i) const;
		void		new_contact( void );

	private:

		std::string	_first_name;
		std::string	_last_name;
		std::string	_nick_name;
		std::string	_phone_nbr;
		std::string	_dark_secret;
		void		_set_first_name( void );
		void		_set_last_name( void );
		void		_set_nick_name( void );
		void		_set_phone_nbr( void );
		void		_set_dark_secret( void );
};

#endif