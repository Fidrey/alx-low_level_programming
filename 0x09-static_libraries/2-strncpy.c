#include <stdio.h>
#include "main.h"

/**
  * _strncpy - copies the source string in destination
  * @dest : input value
  * @src : input value src
  * @n: number of values
  * Return: always return dest to the pointer
  */

char *_strncpy(char *dest, char *src, int n)
{
	int hi;

	hi = 0;
	while (hi < n && src[hi] != '\0')
	{
		dest[hi] = src[hi];
		hi++;
	}
	while (hi < n)
	{
		dest[hi] = '\0';
		hi++;
	}

	return (dest);
}
