#include <iostream>

/*
	reset_to_99: Resets any number to 99
	parameters:
		value: value to change to 99
	returns: void
*/

void reset_to_99(int* value) {
	*value = 99;
}

int main() {
	int x = 3;
	std::cout << x << std::endl;

	reset_to_99(&x);

	std::cout << x << std::endl;

	std::cin.get();

	return 0;
}