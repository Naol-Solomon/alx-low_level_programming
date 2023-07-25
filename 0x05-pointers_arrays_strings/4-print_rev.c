#include "main.h"
/**
 * print_rev - print string in reverse followed by newline
 * @s: parameter it takes
 * Return: Always 0
 */
void print_rev(char *s)
{
	int count = 0;
	int r;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	s--;
	for (r =count ; r > 0; r--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
