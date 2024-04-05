#include <iostream>
#include <cstdarg>

/*
	print_strings: Print a list of strings
	Parameters:
		separator: String to separate strings by
		n: Number of elements
		...: List of strings to print
	Returns: void
*/

void print_strings(const char* separator, const unsigned int n, ...) {
	va_list args;
	va_start(args, n);
	for (int i = 0; i < n; i++) {
		char* string = va_arg(args, char*);
		if (string == NULL) {
			std::cout << "(nil)";
		}
		else {
			std::cout << string;
		}
		if (separator != NULL && i + 1 < n) {
			std::cout << separator;
		}
	}
	va_end(args);
	std::cout << std::endl;
}

int test_print_strings()
{
	print_strings(", ", 4, "Jay", "Django", NULL, "Jason");
	return (0);
}