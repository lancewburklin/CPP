#include <iostream>

/*
	puts2: Prints every other character in a string
	Parameters:
		str: String to print
	Returns: void
*/

void puts2(char* str) {
	int i = 0;
	while (str[i] != '\0') {
		putchar(str[i]);
		if (str[i + 1] != '\0') {
			i++;
		}
		i++;
	}
}

int test_puts2() {
	char str[] = "0123456789";
	puts2(str);
	return 0;
}