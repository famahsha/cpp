#include<iostream>
#include<string>



int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string*  stringPTR = &string;
	std::string& stringREF = string;

	std::cout << "Memory Address of string = " << &string << std::endl;
	std::cout << "Memory Address held by stringPTR = " << stringPTR << std::endl;
	std::cout << "Memory Address held by stringREF = " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "Value of string = " << string << std::endl;
	std::cout << "Value of stringPTR = " << *stringPTR << std::endl;
	std::cout << "Value of stringREF = " << stringREF << std::endl;
}