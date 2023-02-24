#include <stdio.h>
/**
 *main - prime factors of a number
 *Return: no return
 */
int main(void)
{
	long int a = 612852475143, b = 0, c = 2;

	while (a != 1)
	{
		if (a % c == 0)
		{
			while (a % c == 0)
			{
				a /= c;
			}
			b = c;

		}
		c++;
	}
	printf("%ld", b);
	printf("\n");

	return (0);
}
