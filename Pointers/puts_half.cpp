#include <iostream>

/*
	puts_half: Prints the last half of a string
	Parameters:
		str: string to print the last half of
	Returns: void
*/

void puts_half(char* str) {
	int i = 0;
	while (str[i] != '\0') {
		i++;
	}
	i = (i - 1) / 2;
	while (str[i] != '\0') {
		i++;
		putchar(str[i]);
	}
	putchar('\n');
}

int test_puts_half() {
	char str[] = "0123456789";
	puts_half(str);
	char str2[] = "1234";
	puts_half(str2);
	char str3[] = "123";
	puts_half(str3);
	return 0;
}