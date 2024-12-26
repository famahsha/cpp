/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 12:42:27 by Famahsha          #+#    #+#             */
/*   Updated: 2024/07/15 12:42:28 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	
}

BitcoinExchange::BitcoinExchange(std::string infile) {
    if (!this->loadExchangeRates())
        return;
    if (!this->processInputFile(infile))
        return;
}


BitcoinExchange::BitcoinExchange(const BitcoinExchange &object)
{
    *this = object;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &obj)
{
	if(this != &obj)
	{
		this->exchangeRates = obj.exchangeRates;
	}
	return (*this);
}

BitcoinExchange::~BitcoinExchange()
{
	
}

bool BitcoinExchange::loadExchangeRates() {
    std::ifstream data("data.csv");
    std::string line; //store each line

    if (data.fail()) {
        std::cout << "Error: Cannot Open Data File" << std::endl;
        data.close();
        return false;
    }
    getline(data, line); // Skip header line
    while (!data.eof()) //loop until endoffile
     {
        getline(data, line);
        std::stringstream str(line); // creates stream str easy to break the string
        std::string date, rate;
        getline(str, date, ',');
        getline(str, rate);
        this->exchangeRates[date] = atof(rate.c_str());
    }
    data.close();
    return true;
}

// bool BitcoinExchange::processInputFile(std::string inf)
// {
//     std::ifstream infile(inf.c_str());
//     std::string line;

//     if (infile.fail()) {
//         std::cout << "Error: Cannot Open Input File" << std::endl;
//         infile.close();
//         return false;
//     }
//     getline(infile, line); // Skip header line
//     while (getline(infile, line)) {
//         this->readDates(line);
//     }
//     infile.close();
//     return true;
// }


bool BitcoinExchange::processInputFile(std:: string inf)
{
	std::ifstream infile(inf.c_str());
	std::string 	line;

	if (infile.fail())
	{
		std::cout << "Error: Cannot Open Data File" << std::endl;
		infile.close();
		return (false);
	}
	getline(infile, line);
	if (line.compare("data | value") == 0)
	{
		std::cout << "Error: Invalid File Format" <<std::endl;
		infile.close();
		return (false);
	}
	else 
	{
		while(getline(infile, line))
		{
			this->readDates(line);
		}
	}
	infile.close();
	return (true);
}

void BitcoinExchange::readDates(std::string line)
{
    std::stringstream str(line);
    std::string date, delim, value;
    float val;

    str >> date >> delim >> value;
    val = this->validateValue(value);
    if (!this->validateDate(date) || !this->validateDelimiter(line) || val == -1)
        return;
    this->calculateAndPrint(date, val);
}


float BitcoinExchange::validateValue(std::string value) {
    float val = atof(value.c_str());
    if (value.find("-") == 0) {
        std::cout << "Error: not a positive number." << std::endl;
        return -1;
    }
    if (value.size() > 4 || val > 1000) {
        std::cout << "Error: too large a number." << std::endl;
        return -1;
    }
    return val;
}


bool BitcoinExchange::validateDate(std::string date) {
    std::stringstream str(date);
    std::string year, month, day;

    if (date.size() != 10 || date[4] != '-' || date[7] != '-') {
        std::cout << "Error: bad input => " << date << std::endl;
        return false;
    }
    getline(str, year, '-');
    getline(str, month, '-');
    getline(str, day);
    if (!this->validateDayMonthYear(year, month, day)) {
        std::cout << "Error: bad input => " << date << std::endl;
        return false;
    }
    return true;
}

bool BitcoinExchange::validateDelimiter(std::string date) {
    if (date.find(" | ") != 10) {
        std::cout << "Error: Invalid Delimiter" << std::endl;
        return false;
    }
    return true;
}


bool	BitcoinExchange::validateDayMonthYear(std::string year, std::string month, std::string day)
{
	int	y = atoi(year.c_str());  
	int	m = atoi(month.c_str());
	int	d = atoi(day.c_str());

	if (y < 2009 || y > 2022)
		return (false);
	if (m < 1 || m > 12)
		return (false);
	if (d < 1 || d > 31)
		return (false);
	if ((m == 2 && d > 28) && (y != 2012 && y != 2016 && y != 2020))
		return (false);
	if ((m == 2 && d > 29) && (y == 2012 || y == 2016 || y == 2020))
		return (false);
	return (true);
}

std::string BitcoinExchange::findPreviousDate(std::string date)
{
	std::stringstream	str(date);
	std::string			year, month, day, newDate;

	getline(str, year, '-');
	getline(str, month, '-');
	getline(str, day);
	int	y = atoi(year.c_str());  
	int	m = atoi(month.c_str());
	int	d = atoi(day.c_str());

	if(d > 1)
		d--;
	else if (m > 2)
	{
		m--;
	}
	else if (y > 2008)
	{
		d = 31;
		m = 12;
		y--;
	}
	std::stringstream nwDate;
	nwDate << y << '-' << std::setw(2) << std::setfill('0') << m << '-' << std::setw(2) << std::setfill('0') << d;
	newDate = nwDate.str();
	return (newDate);
}

void	BitcoinExchange::calculateAndPrint(std::string date, float val)
{
	if (this->exchangeRates.find(date) !=  this->exchangeRates.end())
	{
		float result = val * this->exchangeRates[date];
		std::cout << date << " => " << std::fixed << std::setprecision(2) << val;
		std::cout << " = " << result << std::endl;
		return ;
	}
	else if (this->validateDate(date))
	{
		date = this->findPreviousDate(date);
		this->calculateAndPrint(date, val);
	}
}



