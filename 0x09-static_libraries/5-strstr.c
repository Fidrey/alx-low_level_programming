#include "main.h"
#include <string.h>

/**
  * _strstr - function used to return substring
  * @neddle : input value
  * @haystack: input value
  * Return: always 0 (success)
  */

char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	if (*needle == '\0')
	{
		return (haystack);
	}
	if (*haystack == '\0')
	{
		return (NULL);
	}
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			while (*h != '\0' && *n != '\0' && *h == *n)
			{
				h++;
				n++;
			}
		}
			if (*n == '\0')
			{
				return (haystack);
			}
		haystack++;
	}
	return (NULL);
}
