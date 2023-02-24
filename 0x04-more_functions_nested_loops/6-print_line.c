#include "main.h"
/**
 *print_line - prints a straight line
 *@n: the times the lines are printed
 *Return: no return
 */
void print_line(int n)
{
	int i = 0;

	while (i < n && n > 0)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
