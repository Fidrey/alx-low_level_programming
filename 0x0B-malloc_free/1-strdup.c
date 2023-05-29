#include <stdlib.h>
#include "main.h"

/**
 * _strdup - string duplicate to a new memory location
 * @str: char
 * description: _strdup duplicate to a memory location
 * Return: always retun s
 */

char *_strdup(char *str)
{
	int b = 0, d = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[d])
	{
		d++;
	}
	s = malloc((sizeof(char) * d) + 1);

	if (s == NULL)
		return (NULL);

	while (b < d)
	{
		s[b] = str[b];
		b++;
	}

	s[b] = '\0';
	return (s);
}
