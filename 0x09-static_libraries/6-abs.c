#include "main.h"

/**
  * _abs - prints the absolute value of an integer.
  * @a:the integer to compute its absolute value.
  * Return:returns the abs value.
  */
int _abs(int a)
{
	int c = a;
	int absvalue;

	if (c < 0)
	{
		c = c * (-1);
	}
	absvalue = c;
	return (absvalue);
}
