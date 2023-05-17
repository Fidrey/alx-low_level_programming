#include <stdio.h>
#include "main.h"

/**
 * main - prints the function name
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always zero (0)
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
