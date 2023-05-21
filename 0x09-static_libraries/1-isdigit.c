#include "main.h"

/**
  * _isdigit - checks if parameter is a number from 0 to 9
  * @c: input number
  * Return: always 1 if is a number from 0 to 9, and return 0 in other case.
  */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
