#include <iostream>
#include <cstdarg>

/*
	print_numbers: Print numbers separated by string
	Parameters:
		separator: String to separate numbers with
		n: Number of elements to print
		...: Ints to print
	Returns: void
*/

void print_numbers(const char* separator, const unsigned int n, ...) {
	va_list args;
	va_start(args, n);
	for (int i = 0; i < n; i++) {
		std::cout << va_arg(args, int);
		if (separator != NULL && i + 1 != n) {
			std::cout << separator;
		}
	}
	std::cout << std::endl;
}

int test_print_numbers(void)
{
	print_numbers(", ", 4, 0, 98, -1024, 402);
	return (0);
}