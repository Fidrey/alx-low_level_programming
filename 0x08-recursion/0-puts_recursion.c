#include "main.h"

/**
 * _puts_recursion -prints a string, followed by a new line
 * @s: input
 * Return: always 0(sucesss)
 */

int _puts_recursion(int *s)
{
	if (*s != '\0')
	{
		_putchar (*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
