#include "function_pointers.h"

/**
  * int_index - function name
  * @array: is a pointer to the first element of the array
  * @size: represents the number of elements in the array.
  * @cmp: function pointer
  * Return: always return the pointer of array
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int t = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (t < size)
			{
				if (cmp(array[t]))
					return (t);
				t++;
			}
		}
	}
	return (-1);
}
