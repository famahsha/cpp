#include "iter.hpp"


#define N 4

template <typename T>

void decrement(T elem)
{
	if ((elem >= 97 && elem <= 109) || (elem >= 65 && elem <= 77)
		|| (elem >= 48 && elem <= 53))
		elem = elem + 1;
	else
		elem = elem - 1;
}

template <typename T>

void    print( T &i )
{
    std::cout << i << std::endl;
}


int main(void)
{

	int int_array[N] = {2, 4, 6, 8};

	std::cout << "Original intArray:" << std::endl;
    iter(int_array, N, print);

    iter(int_array, N, decrement);

    std::cout << "Modified intArray:" << std::endl;
    iter(int_array, N, print);

	//characters

	char charArray[N] = {'a', 'B', 'x', 'y'};

    std::cout << "Original charArray:" << std::endl;
    iter(charArray, N, print);

    iter(charArray, N, decrement);

    std::cout << "Modified charArray:" << std::endl;
    iter(charArray, N, print);

	return(0);
}