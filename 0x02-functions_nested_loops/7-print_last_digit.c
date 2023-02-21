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
		i = i * -1;
	_putchar(i + '0');
	return (i)
}
