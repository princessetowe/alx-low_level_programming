#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: memory destination
 * @src: memory source
 * @n: number of bytes
 * Return: copied memory with n bytes
 */
char *memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
