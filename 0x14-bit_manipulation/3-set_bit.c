#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index
 * @n: the number to find the index
 * @index: is the position at which 1 exist
 * Return: returns a thing
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n |= (1 << index);
	return (1);
}
