#include "main.h"
/**
 *print_last_digit - prints the last digit of a number
 *@n: used for the argument of a function
 *Return: The last digit of a number
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (i < 0)
	{
		_putchar(-i +48);
	}
	else
	{
		_putchar(i + 48);
		return (i);
	}
}
