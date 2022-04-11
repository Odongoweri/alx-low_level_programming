#include "main.h"
#include <stdlib.h>

/**
 * *_memset - fills memory with a constant byte.
 * @s: pointer to put the constant
 * @b: constant
 * @n: max bytes to use
 * Return: s
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arrlloc = NULL;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	/*Allocate memory*/
	arrlloc = malloc(nmemb * size);

	if (arrlloc == NULL)
		return (NULL);

	/*Incialize array with 0*/
	for (i = 0; i < nmemb * size; i++)
		arrlloc[i] = 0;

	return (arrlloc);
}
