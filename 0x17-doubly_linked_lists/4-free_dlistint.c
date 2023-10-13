#include "lists.h"
/**
 * free_dlistint - function to free allocated memory lists
 * @head: pointer to first node of the list
 * Return: Nothing
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	dlistint_t *nextpointer = NULL;

	while (temp != NULL)
	{
		nextpointer = temp->next;
		free(head);
		temp = nextpointer;
	}
}
