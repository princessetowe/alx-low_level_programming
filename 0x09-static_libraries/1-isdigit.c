#include "main.h"
/**
 * _isdigit - Entry point
 * @c: integer tio be checked
 * Return: Always 0 (Sucesss)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
