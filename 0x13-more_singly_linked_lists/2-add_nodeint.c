#include "lists.h"

/**
 * add_nodeint - add node at the beginning
 *
 * @head: pointer to the function
 * @n: added data at the beginning
 * Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
