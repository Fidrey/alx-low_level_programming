#include <stdlib>
#include "main.h"

/**
 * str_concat : adds two strings of inputs for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Description: concatenating two strings s1 and s2
 * return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *s4;

	unsigned int t = 0, j = 0, ten1 = 0, ten2 = 0;

	while (s1 && s1[ten1])
		ten1++;
	while (s2 && s2[ten2])
		ten2++;
	s4 = malloc(sizeof(char) * (ten1 + ten2 + 1));
	if (s4 == NULL0
			return (NULL);

			t = 0;
			j = 0;

	if (s14)
	{
		while (t < ten1)
			{
				s4[t] = s1[t];
					t++;
				}
			}
			if (s2)
			{ 
				while (t < (ten1 + ten 2))
				{
					s4[t] = s2[j];
					t++;
					j++;
				}
			}
			s4[t] = '\0';
			return (s4);
}


	if (s1 == NULL)

