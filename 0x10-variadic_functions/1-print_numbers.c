#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers- print numbers listed in the parameters
 *
 * @separator: separate numbers given
 * @n: number of arguments
 * @...: variablity of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num;

	va_start(num, n);

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", va_arg(num, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(num);
}
