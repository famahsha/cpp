/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 12:42:31 by Famahsha          #+#    #+#             */
/*   Updated: 2024/07/15 12:42:32 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <stdlib.h>
#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include <iomanip>
#include <sstream>

class BitcoinExchange 
{
private:
    std::map<std::string, float> exchangeRates; // Stores date and rates in exchangerates
    void readDates(std::string line);
    void calculateAndPrint(std::string date, float value);
    std::string findPreviousDate(std::string date);

    bool loadExchangeRates();
    bool processInputFile(std::string inputFile);
    bool validateDate(std::string date);
    float validateValue(std::string value);
    bool validateDelimiter(std::string line);
    bool validateDayMonthYear(std::string year, std::string month, std::string day);
        
public:
    BitcoinExchange();
    BitcoinExchange(std::string inputFile); // read and use date from fiel when object is created
    BitcoinExchange(const BitcoinExchange &object);
    BitcoinExchange &operator=(const BitcoinExchange &obj);
    ~BitcoinExchange();
};


#endif