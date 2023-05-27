#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list args;

	va_start(args, format);

	int v = 0;
	char ch;
	char *str;
	float f;

	while (format[v] != '\0')
	{
		switch (format[v])
		{
			case 'c':
				ch = (char) va_arg(args, int);
				printf("%c", ch);
				break;
			case 'v':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					printf("(nil)");
				printf("%s", str);
				break;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
