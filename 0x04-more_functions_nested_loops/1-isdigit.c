#include "main.h"
/**
 *_isdigit- this prints the code
 *@c: the integer to be checked
 *Return: Always 0 
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
