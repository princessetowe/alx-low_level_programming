#include "main.h"
#include <stdlib.h>
/**
 * create_array - Entry point
 * @size: size of the array
 * @c: stored char
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);

	a = malloc(sizeof(c) * size);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
