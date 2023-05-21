#include <string.h>
#include "main.h"

/**
  * _strncat - to concatenate two strings using atmost n bytes from src
  * @dest: input value for string1
  * @src: input value for string2
  * @n: number of values
  * Return: always dest for sucess and 0 for fail
  */

char *_strncat(char *dest, char *src, int n)
{
	int c;
	int o;

	c = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	o = 0;
	while (o < n && src[o] != '\0')
	{
	dest[c] = src[o];
	c++;
	o++;
	}
	dest[c] = '\0';
	return (dest);
}
