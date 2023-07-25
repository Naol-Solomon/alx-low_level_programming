#include "main.h"
/**
 * swap_int - swap two integers
 * @a: pointer parameter
 * @b: pointer parameter
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
