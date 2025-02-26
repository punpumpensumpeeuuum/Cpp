/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buddy2 <buddy2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 22:05:06 by dinda-si          #+#    #+#             */
/*   Updated: 2025/02/26 01:22:56 by buddy2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string		searchandreplace(std::string buffer, const std::string search, const std::string replace)
{
	size_t	eraselength = search.length();
	size_t	replacelength = replace.length();
	size_t	i = buffer.find(search);

	while (i != std::string::npos)
	{
		buffer.erase(i, eraselength);
		buffer.insert(i, replace);
		i = buffer.find(search, i + replacelength);
	}
	return (buffer);
}

int	main(int ac, char **av)
{
	if (ac != 4)
		return (1);
	const std::string	filename = av[1];
	const std::string	search = av[2];
	const std::string	replace = av[3];

	std::ifstream		fileread;
	fileread.open(av[1]);
	if (!fileread.is_open())
	{
		std::cout << "Invalid infile" << std::endl;
		return (2);
	}
	std::ofstream		filewrite;
	filewrite.open((filename + ".replace").c_str(), std::ios::out | std::ios::trunc);
	if (!filewrite.is_open())
	{
		std::cout << "Invalid outfile" << std::endl;
		fileread.close();
		return (3);
	}
	std::string			buffer;
	while (std::getline(fileread, buffer))
	{
		buffer = searchandreplace(buffer, search, replace);
		filewrite << buffer;
		if (fileread.peek() != EOF)
			filewrite << std::endl;
	}
	filewrite.close();
	fileread.close();
	return (0);
}
