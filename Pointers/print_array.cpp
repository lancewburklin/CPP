#include <iostream>

/*
	print_array: Print an array
	Parameters:
		a: Array to print
		n: Number of elements to print in the array.
	Returns: void
		
*/

void print_array(int* a, int n) {
	for (int i = 0; i < n; i++) {
		std::cout << a[i];
		if (i + 1 < n) {
			std::cout << ", ";
		}
	}
	putchar('\n');
}

int test_print_array() {
	int a[5];

	a[0] = 1;
	a[1] = 1;
	a[2] = 2;
	a[3] = 3;
	a[4] = 5;

	print_array(a, 5);
	return 0;
}