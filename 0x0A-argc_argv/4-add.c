#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
  * main - prints the sum of args positive numbers
  * @argc: argument count
  * @argv: argument vector
  * Return: Always 0 (Success)
  */
int main(int argc, char *argv[])
{
	int c;
	unsigned int t, sum = 0;
	char *d;

	if (argc > 1)
	{
		for (c = 1; c < argc; c++)
		{
			d = argv[c];

			for (t = 0; t < strlen(d); t++)
			{
				if (d[t] < 48 || d[t] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
		sum += atoi(d);
		    d++;
		}
	printf("%d\n", sum);
	}
else
{
	printf("0\n");
}
return (0);
}

