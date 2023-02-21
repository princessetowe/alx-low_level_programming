#include "main.h"
/**
 * times_table-  prints the 9 times table, starting with 0
 * Return: Void
 */
void times_table(void)
{
	int a = 0;
	int b, c;

	while (a <= 9)
	{
		b = 0;

		while (b <= 9)
		{
			c = a * b;
			if (b == 0)
			{
				_putchar('0' + c);
			}
			else if (c < 10)
			{
				_putchar(' ');
				_putchar('0' + c);
			}
			else
			{
				_putchar('0' + c / 10);
				_putchar('0' + c % 10);
			}
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			b++;
		}
		_putchar('\n');
		a+;
	}
}
