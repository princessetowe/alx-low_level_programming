#include "main.h"
/**
 *_isupper- this checks for uppercase letters
 *@c: this is the variable
 *Return: Always 0 (Success)
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
