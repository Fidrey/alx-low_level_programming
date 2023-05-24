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
	size_t c;

	for (c = 0; c < size; c++)
	{
		action(array[c]);
	}
}

