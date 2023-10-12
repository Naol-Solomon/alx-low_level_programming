#include "lists.h"
/**
 * dlistint_len - function to return the number of the elements in the list
 * @h: pointer to the first element in the list
 * Return: number of elements in the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t  number = 0;

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
			temp = temp->next;
		}
	}
	return (number);
}
