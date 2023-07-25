#include "main.h"
/**
 * _puts - print sting followed by new line
 * @str: parameter it takes
 * Return: Always 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
