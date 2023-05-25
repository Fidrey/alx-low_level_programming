#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int i = 0;

	char *str, *sep = "";

	va_list list;

	va_start(list, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 't':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'p':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 'u':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					t++;
					continue;
			}
			sep = ", ";
			t++;
		}
	}
	printf("\n");
	va_end(list);
}
