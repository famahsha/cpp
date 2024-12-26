#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <string>
#include <stdint.h>
#include "data.hpp"

class Serializer
{
	private:
		Serializer();
		~Serializer();
		Serializer(Serializer const & copy);
		Serializer &operator=(Serializer const &rhs);
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif


//converting a  pointer to special num and converting it again