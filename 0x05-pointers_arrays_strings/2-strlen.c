#include "main.h"
/**
 * _strlen- retuens the length of string
 * @s: pointer of string
 * Return: length of s
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + 1))
		i++;
	return (i);
}
