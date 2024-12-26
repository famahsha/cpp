#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

class ScalarConverter
{
	private :
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(ScalarConverter const & copy);
		ScalarConverter &operator=(ScalarConverter const &rhs);	
	public:
		static void convert(std::string &str);
};

bool is_pseudo_literal(std::string& s);
void cast_to_char(std::string& str);
void cast_to_int(std::string& str);
void cast_to_float(std::string& str);
void cast_to_double(std::string& str);
int is_valid(std::string &s);

#endif