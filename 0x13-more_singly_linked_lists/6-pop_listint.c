#include "lists.h"

/**
 * pop_listint - to delete head node
 * @head: pointer to first nodes
 * Return: nodes data or zero if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int data;

	if (*head == NULL)
	{
		return (0);
	}
	while (!head)
	{
		ptr = *head;
		data = ptr->n;
		*head = ptr->next;
		free(ptr);
	}
	return (data);
}
