#include "main.h"
/**
 *print_alphabet- This program prints the alphabets in lower case
 *
 *Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
