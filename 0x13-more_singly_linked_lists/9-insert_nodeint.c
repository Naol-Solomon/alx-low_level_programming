#include "lists.h"

/**
 * insert_nodeint_at_index - adds a nodes at a specific position
 * @head: is the pointer to the head of the linked list
 * @idx: the node is added after idx
 * @n: value added
 * Return: of function fails-NULL otherwise new nodes
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp = *head;
	size_t len = 0;

	if (*head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = temp;
		*head = temp;
		return (*head);
	}
	while (len < idx - 1)
	{
		if (temp->next == NULL)
			return (NULL);
		temp = temp->next;
		len++;
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
