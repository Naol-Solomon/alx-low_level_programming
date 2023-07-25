#include "main.h"
/**
 * _strlen - returns the length of string
 * @s: pointer it takes
 * Return: Always 0
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
