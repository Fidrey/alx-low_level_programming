#include <stdio.h>
#include "main.h"

/**
  * _puts - prints a string then a new line
  * @s: input string
  * Return: always zero 0
  */

void _puts(char *s)
{
	int count = 0;

	while (count >= 0)
	{
		if (s[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(s[count]);
		count++;
	}
}
