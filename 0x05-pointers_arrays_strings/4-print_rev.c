#include "main.h"
/**
 * print_rev - prints a string
 * @s: input string
 * Return: none
 */
void print_rev(char *s)
{
	int c = 0;
	
	while (count >= 0)
	{
		if (s[count] != '\0')
		{
			count++;
		}
		else
		{
			break;
		}
	}
	for (count--; count >=0; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
