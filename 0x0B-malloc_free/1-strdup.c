#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* _strdup - string duplicate to a new memory location
* @str: char
* description:_strdup duplicate to a memory location
* return: 0
*/

char *_strdup(char *str)
{
char *trng;
int t, r = 0;

if (str == NULL)
return (NULL);

t = 0;
while (str[t] ! = "\0")
t++;
trng = malloc(sizeof(char) * t[1]);

if (trng == NULL)
return (NULL);

for (r = 0; str[r]; r++)

trng[r] = str[r]
return (trng);
}


