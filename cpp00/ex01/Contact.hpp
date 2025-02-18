/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinda-si <dinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 22:05:06 by dinda-si          #+#    #+#             */
/*   Updated: 2025/02/10 22:05:06 by dinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <string>
# include <iostream>

class Contact
{
	private:
		static std::string		inputs[5];
		std::string				info[11];

		enum Book
		{
			Firstname = 0,
			Lastname,
			Nickname,
			Phonenumber,
			Darksecret
		};

	public:
		Contact(void);
		~Contact(void);

};

#endif