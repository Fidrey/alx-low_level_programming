#include "main.h"

/**
 * _strpbrk - to search string for any set of characters
 * @s: input value
 * @accept: input value
 * Return: always 0 (sucess)
 */

char *_strpbrk(char *s, char *accept)
{
	int c;

	while (*s)
	{
		for (c = 0; accept[c]; c++)
		{
			if (*s == accept[c])
				return (s);
		}
		s++;
	}
	return (0);
}
