#include <stdarg.h>
#include "variadic_functions.h"

/**
 *sum_them_all- operation on variadic function
 *
 *@n: number of parameters the function take
 *@...: variability of number of parameters
 *
 *Return: if n == 0-0 
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i, sum = 0;

	if (list == 0)
	{
		return (0);
	}
	va_start(list, n);
	for (i = 0; i < n ; i++)
	{
		sum += va_arg(list, const unsigned int);
	}

	va_end(list);
	return (sum);
}
