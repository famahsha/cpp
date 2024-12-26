#include "Base.hpp"

int main(void)
{
	Base *base = generate();
	identify(base);
	identify(*base);
	delete base;
}

//genrate retuns a pointer to object of base or derived class
//identify base determine actual type of object pointed by base
//