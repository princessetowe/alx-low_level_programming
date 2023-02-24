#include "main.h"

/**
 *_isupper- this checks for uppercase letters
 *@c: input
 *Return: 1 if it ia an uppercase character, 0 in the other case.
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
