#include <stdio.h>
#include "main.h"

/**
  * _isupper - function to check if char is upper case
  * @c: c is the character we are checking
  * Return: always 0
  */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
		return (0);
}
