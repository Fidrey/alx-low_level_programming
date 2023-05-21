#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: input string
 * Return: always 0 (sucess)
 */

int _atoi(char *s)
{
	int c, o, n, len, f, digit;

	c = 0;
	o = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	while (c < len && f == 0)
	{
		if (s[c] == '-')
		{
			++o;
		}
		if (s[c] >= '0' && s[c] <= '9')
		{
			digit = s[c] - '0';
			if (o % 2)
			{
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			}
			if (s[c + 1] < '0' || s[c + 1] > '9')
				break;
			f = 0;
		}
		c++;
	}
	if (f == 0)
	{
		return (0);
	}
	return (n);
}
