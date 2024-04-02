#include <iostream>

/*
	_puts: Prints a string followed by a newline
	Parameters:
		str: String to print
	Returns: void
*/

void _puts(char* str) {
	int i = 0;
	while (str[i] != '\0') {
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}

int test_puts() {
	char str[] = "This is a C++ file";
	_puts(str);
	return 0;
}