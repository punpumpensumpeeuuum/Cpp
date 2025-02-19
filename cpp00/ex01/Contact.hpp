/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinda-si <dinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 22:05:06 by dinda-si          #+#    #+#             */
/*   Updated: 2025/02/18 18:26:03 by dinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <iomanip>
# include <string>
# include <cstdlib>

class Contact
{
	private:
		static std::string		inputs[5];
		std::string				info[11];

		enum Book
		{
			FirstName = 0,
			LastName,
			NickName,
			PhoneNumber,
			DarkestSecret
		};

	public:
		Contact(void);
		~Contact(void);

		void	set_contact();
		void display_contact(int index) const;

};

#endif