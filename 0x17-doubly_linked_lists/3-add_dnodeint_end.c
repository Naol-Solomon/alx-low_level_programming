#include "lists.h"
/**
 * add_dnodeint_end - add node at the end of the list
 * @head: pointer pointing to head pointer
 * @n: data passed to the function
 * Return: address of new  node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;
	}
	else
	{
		dlistint_t *temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = node;
		node->prev = temp;
	}
	return (node);
}
