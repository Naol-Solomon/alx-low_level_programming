#include "lists.h"

/**
 * print_list- function print list of linked list
 *
 * @h: pointer to list_t list to print
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t numNodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		numNodes++;
	}
	return (numNodes++);
}

