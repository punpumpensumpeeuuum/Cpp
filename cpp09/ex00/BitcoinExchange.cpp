/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinda-si <dinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:16:23 by buddy2            #+#    #+#             */
/*   Updated: 2026/01/22 17:42:10 by dinda-si         ###   ########.fr       */
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
	std::string		mlt;
	std::string		date;

	file.open(input.c_str());
	std::getline(file, strfile);
	if (strfile == "date | value" )
		std::getline(file, strfile);
	while (!file.eof())
	{
		if (strfile.length() < 1)
		{
			std::cerr << "Error: empty line" << std::endl;
			std::getline(file, strfile);
			continue;
		}
		if (strfile.length() < 14)
		{
			std::cerr << "Error: bad input => " << strfile << std::endl;
			return;
		}
		date = strfile.substr(0, 10);
		mlt = strfile.substr(13);
		float value = 0;
		std::stringstream cc;
		cc << mlt;
		cc >> value;
		if (Parsing(date, value, strfile) == 0)
			PrintOuput(date, value);
		std::getline(file, strfile);
	}
	if (strfile.length() < 1 && file.is_open())
	{
		std::cerr << "Error: empty line" << std::endl;
		return;
	}
	if (strfile.length() < 14 && file.is_open())
	{
		std::cerr << "Error: bad input => " << strfile << std::endl;
		return;
	}
	date = strfile.substr(0, 10);
	mlt = strfile.substr(13);
	float value = 0;
	std::stringstream cc;
	cc << mlt;
	cc >> value;
	if (Parsing(date, value, strfile) == 0)
		PrintOuput(date, value);
}

bool isLeapYear(int year)
{
	if (year % 400 == 0)
		return true;
	if (year % 100 == 0)
		return false;
	return (year % 4 == 0);
}

int		BitcoinExchange::Parsing(std::string date, float value, std::string line)
{
	size_t idx = line.find("|");
	if ((line[idx + 1] != ' ' || line[idx - 1] != ' ') || (line.substr(4,1) != "-" && line.substr(7,1) != "-"))
	{
		std::cerr << "Error: Invalid Format => " << line << std::endl;
		return (-1);
	}
	int	year, month, day;
	std::stringstream	conv;
	conv << date.substr(0,4) << " " << date.substr(5,2) << " " << date.substr(8,2);
	conv >> year >> month >> day;
	int month_limits[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (isLeapYear(year))
		month_limits[1] = 29;
	if (year < 2009 || month < 1 || month > 12)
	{
		std::cerr << "Error: Invalid Date => " << line << std::endl;
		return (-1);
	}
	if (day > month_limits[month - 1] || day < 1)
	{
		std::cerr << "Error: Out of month range => " << line << std::endl;
		return (-1);
	}
	if (value < 0.00 || value > 1000.00 )
	{
		std::cerr << "Error: Rate out of range => " << line << std::endl;
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
		std::cout << inputdate << " => " << bitcoins << " = " <<  std::fixed << std::setprecision(2) << bitcoins * itb->second << "\n";
		flag = false;
	}
	else
	{
		ite = this->database.lower_bound(inputdate);
		std::cout << inputdate << " => " << bitcoins << " = " << std::fixed << std::setprecision(2) << bitcoins * ite->second << "\n";
	}
}
