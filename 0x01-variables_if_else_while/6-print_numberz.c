#include <stdio.h>
/**
 *main - This program prints numbers between 0 to 9.
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
