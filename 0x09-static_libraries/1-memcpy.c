#include <stdio.h>
#include"main.h"

/**
  * _memcpy - function name that copies memory area
  * @dest: location where memory is stored
  * @src: memory where it is copied
  * @n: number of bytes
  * Return: always dest (sucess), return 0 if not successful
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int hi = 0;
	int p = n;

	for (hi < p; hi++;)
	{
		dest[hi] = src[hi];
		n--;
	}
	return (dest);
}
