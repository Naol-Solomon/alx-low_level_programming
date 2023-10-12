#include "lists.h"
/**
 * print_dlistint - print a list of integers in the given lists
 * @h: head pointer to the head of the list
 * Return: number of elements in the list
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t number = 0;

	if (h == NULL)
	{
		return (number);
	}
	else
	{
		const dlistint_t *temp = h;

		while (temp != NULL)
		{
			number++;
			printf("%d\n", temp->n);
			temp = temp->next;
		}
	}
	return (number);
}
