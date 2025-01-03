#include "ScalarConverter.hpp"

ScalarConverter::~ScalarConverter() {}

// bool is_pseudo_literal(std::string & s) {
//     return s == "nan" || s == "nanf" || s == "+inf" || s == "inf" || s == "-inf"
//             || s == "+inff" || s == "inff" || s == "-inff";
// }

bool is_pseudo_literal(std::string &s)
{
    if (s == "nan" || s == "nanf" || s == "+inf" || s == "inf" || s == "-inf"
        || s == "+inff" || s == "inff" || s == "-inff") {
        return true;
    } else {
        return false;
    }
}


void cast_to_char(std::string &s)
{
	if (is_pseudo_literal(s)) {
		std::cout << "Unable to cast" << std::endl;
		return ;
	}
	char c = static_cast<char>(atoi(s.c_str()));
	if (!std::isprint(c)) {
		std::cout << "Non displayable" << std::endl;
		return ;
	}
	std::cout << c  << std::endl;
}

void cast_to_int(std::string &s) {
	if (is_pseudo_literal(s)) {
		std::cout << "Unable to cast" << std::endl;
		return ;
	}
	long long value = std::atoll(s.c_str());
	if (value > INT_MAX || value < INT_MIN) {
		std::cout << "Unable to cast" << std::endl;
	} else {
		std::cout << static_cast<int>(value) << std::endl;
	}
}

static bool hasNoDecimalPart(float value)
{
    return value == std::floor(value);
}
// static bool hasNoDecimalPart(float value) {
//     return value == static_cast<float>(static_cast<int>(value));
// }

void cast_to_float(std::string &s)
{
	char* end;
	float nbr = std::strtof(s.c_str(), &end);

    //  check if the float value has no decimal part.
	if (hasNoDecimalPart(nbr)) {
		std::cout << nbr << ".0f" << std::endl;
		return ;
	}
	std::cout << nbr << "f" << std::endl;
}

void cast_to_double(std::string &s) 
{
	char * end;
	double nbr = std::strtod(s.c_str(), &end);

    //  check if the double value has no decimal part.
	if (hasNoDecimalPart(nbr)) {
		std::cout << nbr << ".0" << std::endl;
		return ;
	}
	std::cout << nbr << std::endl;
}


int is_valid(std::string &s) {


	if (is_pseudo_literal(s))
		return 0;

    // if s is a character, convert it to its ascii value
	if (s.length() == 1 && isascii(s[0])) {
		std::stringstream ss;
		ss << static_cast<int>(s[0]);
		s = ss.str();
		return 0;
	}
	for (std::string::size_type i = 0; i < s.size(); i++) {
		char c = s[i];
		if (!isdigit(c) && c != '+' && c != '-' && c != 'f' && c != '.') {
		return 1;
		}
	}
	return 0;
}

void ScalarConverter::convert(std::string &s)
{
	std::cout << "char: ", cast_to_char(s);
	std::cout << "int: ", cast_to_int(s);
	std::cout << "float: ", cast_to_float(s);
	std::cout << "double: ", cast_to_double(s);
}   