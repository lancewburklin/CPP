#include <iostream>

/*
	rev_string: Reverses a string
	Parameters:
		str: string to reverse
	Returns: void
*/

void rev_string(char str[]) {
	int i = 0;
	while (str[i] != '\0') {
		i++;
	}
	int x = 0;
	while (i > x) {
		i--;
		char first = str[x];
		char second = str[i];

		str[i] = first;
		str[x] = second;

		x++;
	}
}

int test_rev_string() {
	char str[] = "Test1";
	std::cout << str << std::endl;
	rev_string(str);
	std::cout << str << std::endl;
	return 0;
}