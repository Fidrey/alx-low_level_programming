#include <stdio.h>
#include "main.h"

/**
 * main -prints the name of the program
 * @argc:number of arguments
 * @agrv:array of arguments
 * return: always 0
 */

int main(int argc __attribute__((unused)), char *argv[])

{
	printf("%s\n", *argv);
			
	return (0);

}

