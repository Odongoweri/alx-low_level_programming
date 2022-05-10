#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements
 * @h: Pointer to an int constant
 *
 * Return: The number of mine
**/

size_t print_listint(const listint_t *h)
{
	size_t n_nodes = 0;/*Counter of nodes*/

	for (n_nodes = 0; h != NULL; n_nodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (n_nodes);
}
