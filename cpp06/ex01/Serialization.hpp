/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buddy2 <buddy2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:43:59 by dinda-si          #+#    #+#             */
/*   Updated: 2025/10/22 22:26:54 by buddy2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_H
# define SERIALIZATION_H

# include <string>
# include <iostream>
# include <cstdint>

struct Data 
{
	unsigned int i;
};

class Serialization
{
	private:
		Serialization();
		Serialization(const Serialization &	copy);
		Serialization &operator=(const Serialization &copy);
		~Serialization();
	public:
		static Data* deserialize(uintptr_t raw);
		static uintptr_t serialize(Data* ptr);
};

#endif