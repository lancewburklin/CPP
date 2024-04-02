#include <iostream>

/*
	_strlen: Gets the length of a string
	Parameters:
		str: String to find the length of
	Returns: Length of the string
*/

int _strlen(char* str) {
	int i = 0;
	while (str[i] != '\0') {
		i++;
	}
	return i;
}

int test_strlen() {
	char str[] = "Hello world!";
	std::cout << _strlen(str) << std::endl;
	return 0;
}