/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinda-si <dinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:16:23 by buddy2            #+#    #+#             */
/*   Updated: 2025/11/21 15:34:56 by dinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	int			intArray[10] = {1, 4, 9, 313, 9812, 2, 151, 0126, 000, 10};
	std::string	stringArray[5] = {"bomdia", "alegria", "felicidade", "pensamentos positivios", ":D"};
	float		floatArray[3] = {6.7, 61.12125, 152.652};
	
	::iter<int>(intArray, 5, ::function);
	::iter<std::string>(stringArray, 5, ::function);
	::iter<float>(floatArray, 3, ::function);
}