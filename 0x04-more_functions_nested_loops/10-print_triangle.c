#include "main.h"
/**
 *print_triangle- prints a triangle
 *@size: size of triangle
 *Return: no return
 */
void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size - a; b++)
			{
				_putchar(' ');
			}
			for (c = 1; c <= a; c++)
			{
				_putchar('#');
			}
			if (c == size)
				continue;
			_putchar('\n');
		}
		_putchar('\n');
	}
}
