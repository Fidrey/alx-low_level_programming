#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */

int **alloc_grid(int width, int height)
{
	int d, e, f, g;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (d = 0; d < height; d++)
	{
		a[d] = malloc(sizeof(int) * width);
		if (a[d] == NULL)
		{
			for (e = d; e >= 0; e--)
			{
				 free(a[e]);
			}

			free(a);
			return (NULL);
		}
	}

	for (f = 0; f < height; f++)
	{
		for (g = 0; g < width; g++)
		{
			a[f][g] = 0;
		}
	}

	return (a);
}
