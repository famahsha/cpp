#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>



template <typename T>

void iter(T *address, int length, void (*function) (T & arr_elem))
{
	
	int i = 0;

	while (i < length)
	{
		function(address[i]);
		i++;
	}
}

# endif