#include "main.h"
/**
 * _strlen - Entry point
 * @s: string pointer
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	return (i);
}
