#include <stdio.h>
#include "main.h"

/**
 * get_endianess- gets endians
 * Return: returns 1 or 0
 */
int get_endianess(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
