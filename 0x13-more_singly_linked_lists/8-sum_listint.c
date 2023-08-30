#include "lists.h"

/**
 * sum_listint - function for printing sum of value
 * @head: head node of th linked list
 * Return: sum of data of linked list
 */
int sum_listint(listint_t *head)
{
	size_t sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
