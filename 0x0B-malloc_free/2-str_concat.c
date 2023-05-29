#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * str_concat - adds two strings of inputs for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Description: concatenating two strings s1 and s2
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	int d = 0, e = 0, f = 0, g = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[d])
		d++;

	while (s2[e])
		e++;
	g = d + e;
	s = malloc((sizeof(char) * g) + 1);

	if (s == NULL)
		return (NULL);

	e = 0;

	while (f < g)
	{
		if (f <= d)
			s[f] = s1[f];
		if (f >= d)
		{
			s[f] = s2[e];
			e++;
		}
		f++;
	}

	s[f] = '\0';
	return (s);
}
