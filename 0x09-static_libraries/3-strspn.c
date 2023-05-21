#include "main.h"

/**
  * _strspn - check for number of characters present in another string
  * @s: input value
  * @accept: input value
  * Return: always c (sucess) and 0 for fail
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	int p;

	while (*s)
	{
		for (p = 0; accept[p]; p++)
		{
			if (*s == accept[p])
			{
				c++;
				break;
			}
			else if (accept[p + 1] == '\0')
				return (c);
		}
		s++;
	}
	return (c);
}
