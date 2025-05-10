/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinda-si <dinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 10:33:11 by dinda-si          #+#    #+#             */
/*   Updated: 2025/05/09 15:03:05 by dinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>
# include <string>

class Brain
{
	private:
		unsigned int		pensamento;
		std::string				*ideas;
	public:
		Brain();
		Brain(const Brain &copy);
		Brain &operator=(const Brain &src);
		~Brain();

		std::string	*getIdeas() const;
		void		setIdeas(std::string idea);
};

#endif