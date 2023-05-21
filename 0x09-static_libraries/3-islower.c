#include <stdio.h>
#include "main.h"

/**
  * _islower - check if lower case character
  * @c:character to if its lowercase
  * Return: always 0
  */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
