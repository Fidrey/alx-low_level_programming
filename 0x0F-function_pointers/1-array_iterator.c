#include "function_pointers.h"

/**
  * array_iterator - function name it iterates array
  * @array: pointer to the first elementof the array
  * @size: size of element in the array
  * @action: function of pointer
  * Return: always void
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int c = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (c < size)
		{
			action(array[c]);
			c++;
		}
	}
}

