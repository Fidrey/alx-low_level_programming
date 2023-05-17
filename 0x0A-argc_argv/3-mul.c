#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
  * main - prints the multiplication of two args numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always zero
 */
int main(int argc, char *argv[])

{
	int c1 = 0, c2 = 0;
	if (argc == 3)
	{
		c1 = atoi(argv[1]);
		c2 = atoi(argv[2]);
		printf("%d\n", c1 * c2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

