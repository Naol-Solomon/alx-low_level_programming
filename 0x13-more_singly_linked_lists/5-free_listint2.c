#include "lists.h"

/**
 *free_listint2 - free memory elements
 *@head: pointer to the given function
 *Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
