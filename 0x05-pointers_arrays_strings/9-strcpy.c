#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies the string pointed to by src
 * @dest: destination
 * @src: source
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (a >= 0)
	{
		*(dest + a) = *(src + a);
		if (*(src + a) != '\0')
			a++;
		else
			a = -1;
	}
	return (dest);
}
