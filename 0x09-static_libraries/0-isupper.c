#include "main.h"
/**
 * _isupper - checks for uppercase letters
 * @c: input
 * Return: 1 if it is an uppercase, 0 if it is not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
