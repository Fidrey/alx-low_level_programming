#include <string.h>
#include "main.h"

/**
  * _strlen - returns the length of a string
  * @s:input string
  * Return: always return length for sucess and 0 for fail
  */

int _strlen(char *s)
{
	int longc = 0;

	while (*s != '\0')
	{
		longc++;
		s++;
	}

	return (longc);
}
