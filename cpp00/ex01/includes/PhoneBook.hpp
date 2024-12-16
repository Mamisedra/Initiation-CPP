/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 16:24:21 by mranaivo          #+#    #+#             */
/*   Updated: 2024/12/16 11:25:22 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK_H__
# define __PHONEBOOK_H__

#include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook 	( void );
		~PhoneBook 	( void );
		void		search_contact( void ) const;
		void		add_contact();
		std::string	print_trucated(std::string name) const;

	private:
		Contact		_contact[8];
		static int	_index;
		static int	_print;
		void		_show_contact(int index) const;

};

#endif