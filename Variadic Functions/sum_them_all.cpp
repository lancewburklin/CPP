#include <iostream>
#include <cstdarg>

/*
	sum_them_all: Sums inputs
	Parameters:
		n: Numbers of number supplied
		...: List of ints
	Returns: The result
*/

int sum_them_all(const unsigned int n, ...) {
	va_list args;
	va_start(args, n);
	int count = 0;

	for (unsigned int i = 0; i < n; i++) {
		count += va_arg(args, int);
	}
	va_end(args);
	return count;
}

int test_sum_them_all()
{
	int sum;

	sum = sum_them_all(2, 98, 1024);
	std::cout << sum << std::endl;
	sum = sum_them_all(4, 98, 1024, 402, -1024);
	std::cout << sum << std::endl;
	sum = sum_them_all(0);
	std::cout << sum << std::endl;
	return (0);
}