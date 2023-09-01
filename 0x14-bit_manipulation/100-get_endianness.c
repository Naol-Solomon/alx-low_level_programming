#include <stdio.h>
#include "main.h"

/**
 * get_endianess- gets endians
 * Return: returns 1 or 0
 */
int get_endianess(void)
{
	int x = 1;

	char *y = (char *)&x;

	if (*y + 48 == 48)
		return (0);
	else
		return (1);
}
