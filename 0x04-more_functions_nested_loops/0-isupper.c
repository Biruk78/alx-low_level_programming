#include <stdio.h>

/**
 * isupper - checks for uppercase character
 * c: the varialble to be checked
 * Return: 1 if uppercase else 0
 */



int isupper(int c) {
	if (c >= 'A' && c <= 'Z')
		return 1;
	return 0;
}