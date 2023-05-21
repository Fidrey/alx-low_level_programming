/**
  * _strcat - concatenates two string
  * @dest: input value for string1
  * @src: input value for string2
  * Return: always 0
  */

char *_strcat(char *dest, char *src)
{
	int c;
	int p;

	c  = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	p = 0;
	while (src[p] != '\0')
	{
		dest[c] = src[p];
		c++;
		p++;
	}
	dest[c] = '\0';
	return (dest);
}
