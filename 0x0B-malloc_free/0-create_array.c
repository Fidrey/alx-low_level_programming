#include <stdlib.h>
#include "main.h"
/**
  * create_array - create array of size and assign char c
  * @size: size of array
  * @c: char to assign
  * Description: create array of size and assign char c
  * Return: pointer to array, NULL if fail
  */

char *create_array(unsigned int size, char c)
{
	unsigned int t;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

		if (s ==NLL)
			return (NULL);
	for (t =0; t < size; t++)
	{
		s[t] = c;
	}
	return (s);
}
