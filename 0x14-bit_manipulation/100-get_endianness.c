#include "main.h"

/**
* get_endianness - is a function that checks the endianness.
*
* Return: return 1 if little endian and 0 for big endian.
**/
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	/*(*char) &x is used to "separate" the bytes and make*/
	/*the pointer point to the first.*/
	return ((int)*c);
}
