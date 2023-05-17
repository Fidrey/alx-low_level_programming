#include <stdio.h>
#include "main.h"

/**
 * main -prints the name of the function
 * @argc: argument count
 * @agrv: argument vector
 * return: always zero (0)
 */

int main(int argc, char *argv[])

{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);

}

