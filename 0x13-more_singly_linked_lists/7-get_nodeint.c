#include "lists.h"

/**
 * get_nodeint_at_index - print node at nth index
 * @head: head nodes of th linked list
 * @index: nth nodes
 * Return: nth node or null if th node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;
	size_t num = 0;

	while (ptr != NULL)
	{
		if (num == index)
			return (ptr);
		num++;
		ptr = ptr->next;
	}
	return (NULL);
}
