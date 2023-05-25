#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function name to sum all the variables
 * @n: the number of parameter passed to the function
 * @...: a variable number of parameters to calculate the sum
 * Return: always an unsigned int
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	unsigned int c, sum = 0;

	va_start(ap, n);
	for (c = 0; c < n; c++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}

