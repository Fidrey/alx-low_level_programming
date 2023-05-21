#include <stdio.h>
#include "main.h"

/**
  * _strchr - checks if the strings contains defined characters
  * @s:input string
  * @c: input string2
  * Return: always s for sucess and 0 for fail
  */

char *_strchr(char *s, char c)
{
	int o = 0;

	for (; s[o] >= '\0'; o++)
	{
		if (s[o] == c)
			return (&s[o]);
	}
	return (0);
}
