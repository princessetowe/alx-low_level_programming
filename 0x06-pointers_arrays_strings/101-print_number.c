#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer parameters
 * Return: 0
 */
void print_number(int n)
{
	unsigned int a;

	a = b;

	if (b < 0)
	{
		_putchar('-');
		a = -b;
	}
	if (a / 10 != 0)
	{
		print_number(a / 10);
	}
	_putchar(a % 10 + '0');
}
