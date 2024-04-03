#include <iostream>

/*
	_strcpy: Copies a string
	Parameters:
		dest: Destination string to copy to
		src: Source string to copy from
	Returns: Pointer to the destination string
*/

char* _strcpy(char dest[], char src[]) {
	int i = 0;
	while (src[i] != '\0') {
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}

int test_strcpy(void)
{
	char s1[98];
	char src[] = "This string needs to be copied";
	char* ptr;

	ptr = _strcpy(s1, src);
	std::cout << s1 << std::endl;
	std::cout << ptr << std::endl;
	return (0);
}