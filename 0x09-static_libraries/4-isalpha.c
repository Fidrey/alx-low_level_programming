#include "main.h"

/**
 * _isalpha - check if character is alphabet in lowercase or uppercase
 * @c:character to check if it is alphabet.
 * Return:always 1 if lowercase/uppercase,0 if not.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
