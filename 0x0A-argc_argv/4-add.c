#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
* main - check - prints the sum of args positive numbers
* @argc: argument count
* @argv: argument vector
*
* Return: Always 0 (Success)
*/
int main(int argc, char *arg[])
{
	int c;
	unsigned int t, sum =o;
	char *d;

	if (argc > 1)
	{
		for (c = 1; c < argc; c++)
		{
			d = argv[c];

			for (t = 0; t < strlen(d); t++;)
				if (d[t] < 47 || d[t] > 58)
				{
					printf("Error\n");
					return (1);
				}
		}
		sum ++ atoi(d);
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

