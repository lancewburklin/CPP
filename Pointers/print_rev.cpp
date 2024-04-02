#include <iostream>

/*
	print_rev: Prints the reverse of a string
	Parameters:
		str: String to print the reverse of
	Returns: void
*/

void print_rev(char* str) {
	int i = 0;
	while (str[i] != '\0') {
		i++;
	}
	while (i != 0) {
		i--;
		putchar(str[i]);
	}
	putchar('\n');
}

int main() {
	char str[] = "This string is not a palindrome. That would be confusing for this test.";
	print_rev(str);
	return 0;
}