#include "lists.h"
/**
 * add_dnodeint - add a node at the beginning
 * @head: the  pointer handling address of head pointer
 * @n: data passed to the function
 * Return: address of new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
	{
		return (NULL);
	}
	else
	{
		if (*head != NULL)
		{
			(*head)->prev = new;
		}
		new->n = n;
		new->prev = NULL;
		new->next = *head;
		*head = new;
	}
	return (new);
}
