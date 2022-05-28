#include <iostream>
#include "Sample.class.hpp"

int main (void)
{
	Sample	exemple; // instance de la class Sample

	exemple.yo();
	exemple.foo = 42;
	std::cout << "foo vaut mtn : " << exemple.foo << std::endl;

	return 0;
}
