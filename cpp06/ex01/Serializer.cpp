#include "Serializer.hpp"

Serializer::~Serializer()
{
}

uintptr_t Serializer::serialize(Data * ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data * Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}


// uintptr_t unsigned integer holding a pointer value
//reinterpret_cast convert pointer type to another pointr type or integer type to another integer type
/* Purpose of reinterpret_cast:

 Pointer and Reference Conversions:
Used to convert one pointer type to another.
Used to convert one reference type to another.

Integral Type Conversions:
Used to convert integral types to pointer types.
Used to convert pointer types to integral types. */