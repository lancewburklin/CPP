#include <iostream>

/*
	swap_int: Swaps the values of two ints
	Parameters:
		a: first int to swap
		b: second int to swap
	Returns: void
*/

void swap_int(int* a, int* b) {
	int temp = *a;

	*a = *b;
	*b = temp;
}

int test_swap_int() {
	
	int a = 12;
	int b = 24;

	std::cout << "A: " << a << std::endl;
	std::cout << "B: " << b << std::endl;

	swap_int(&a, &b);

	std::cout << "A: " << a << std::endl;
	std::cout << "B: " << b << std::endl;

	return 0;
}