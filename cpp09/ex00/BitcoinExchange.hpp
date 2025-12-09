/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buddy2 <buddy2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:16:23 by buddy2            #+#    #+#             */
/*   Updated: 2025/12/09 23:33:44 by buddy2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_H
# define BITCOINEXCHANGE_H 

# include <iomanip>
# include <iostream>
# include <fstream>
# include <sstream>
# include <map>

class BitcoinExchange
{
	private:
		std::map<std::string , float> database;
	public:
		BitcoinExchange ();
		BitcoinExchange (const BitcoinExchange &a);
		~BitcoinExchange ();
		BitcoinExchange & operator = (const BitcoinExchange &a);

		void	ReadData(void);
		void	Input(std::string file);
		int		Parsing(std::string date, float value, std::string line);
		void	PrintMap(std::map<std::string, float> mymap);
		void	PrintOuput(std::string inputdate, float bitcoins);
};

#endif