/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buddy2 <buddy2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:16:23 by buddy2            #+#    #+#             */
/*   Updated: 2025/12/09 23:54:46 by buddy2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange ()
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &a)
{
	*this = a;
}

BitcoinExchange::~BitcoinExchange ()
{
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &a)
{
	(void)a;
	return (*this);
}

void	BitcoinExchange::ReadData()
{
	std::ifstream	data;
	std::string		strdata;
	float			price = 0.0f;

	data.open("./data.csv");
	while (!data.eof())
	{
		data >> strdata;
		std::string date = strdata.substr(0,10);
		date.erase(4,1);
		date.erase(6,1);
		std::stringstream converter;
		converter << strdata.substr(11);
		converter >> price;
		database.insert(std::make_pair(strdata,price));
	}
	data.close();
}

void	BitcoinExchange::Input(std::string input)
{
	std::ifstream	file;
	std::string		strfile;

	file.open(input.c_str());
	while (!file.eof())
	{
		std::getline(file, strfile);
		if (strfile.length() < 14)
			std::cerr << "Wrong format" << std::endl;
		std::string date = strfile.substr(0, 10);
		std::string mlt = strfile.substr(13);
		int key = 0;
		float value = 0;
		std::stringstream converter;
		converter << date;
		converter >> key;
		std::stringstream cc;
		cc << mlt;
		cc >> value;
		if (Parsing(date, value, strfile) == 0)
			PrintOuput(date, value);
	}
	
}

int		BitcoinExchange::Parsing(std::string date, float value, std::string line)
{
    size_t idx = line.find("|");
	if ((line[idx + 1] != ' ' || line[idx - 1] != ' ') || (line.substr(4,1) != "-" && line.substr(7,1) != "-"))
	{
		std::cerr << "Invalid Format\n";
		return (-1);
	}
	int	year, month, day;
	std::stringstream	conv;
	conv << date.substr(0,4) << " " << date.substr(5,2) << " " << date.substr(8,2);
	conv >> year >> month >> day;
	int month_limits[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (year < 2009 || month < 1 || month > 12)
	{
		std::cerr << "Invalid Date Format\n";
		return (-1);
	}
	if (day > month_limits[month - 1] || day < 1)
	{
		std::cerr << "Out of month range\n";
		return (-1);
	}
	if (value < 0.00 || value > 1000.00 )
	{
		std::cerr << "Rate out of range\n";
		return (-1);
	}
	return (0);
}

void	BitcoinExchange::PrintOuput(std::string inputdate, float bitcoins)
{
	std::map<std::string, float>::iterator itb = this->database.begin();
	std::map<std::string, float>::iterator ite = this->database.end();
	bool	flag = false;

	for (; itb != ite; itb++)
	{
		if (itb->first == inputdate)
		{
			flag = true;
			break;
		}
	}
	if (flag == true)
	{
		std::cout << inputdate.insert(4,"-").insert(7,"-") << " => " << bitcoins << " = " <<  std::fixed << std::setprecision(2) << bitcoins * itb->second << "\n";
		flag = false;
	}
	else
	{
		ite = this->database.lower_bound(inputdate);
		std::cout << inputdate.insert(4,"-").insert(7,"-") << " => " << bitcoins << " = " << std::fixed << std::setprecision(2) << bitcoins * ite->second << "\n";
	}
}
