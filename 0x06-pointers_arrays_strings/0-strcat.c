#include "main.h"
/**
 * _strcat- concatenates two strings
 * @dest: input value
 * @src: input value
 * Return: void
 */
int *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		a++;
		b++;
	}

	dest[a] = '\0';
	return (dest);
}
