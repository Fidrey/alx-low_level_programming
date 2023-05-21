#include "main.h"
#include <stdio.h>

/**
  * _strcpy - function copies the string pointed to by src
  * @dest: destination input value
  * @src: source input value
  * Return: always return the pointer to dest.
  */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
