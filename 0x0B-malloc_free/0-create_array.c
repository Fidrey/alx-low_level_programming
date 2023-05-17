#include <stdlib.h>
#include "main.h"

/**
 * create_array - function name, create array of size and assign char c
 * @size- is the size of array
 * @c - is the char to assign to the return pointer
 * return - pointer to array (sucess) null (fail)
 */

char *create_array(unsigned int size, char c)
{
	char *ptArray;
	unsigned int count;
	
	ptArray = malloc(size * sizeof(char));

	for (count = 0; count < size; count++)
		ptArray[count] = c;
	return (ptArray);

	if (size == 0 || ptArray == NULL)
		return (NULL);
}
