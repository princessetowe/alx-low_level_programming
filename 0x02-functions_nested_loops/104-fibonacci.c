#include <stdio.h>
/**
 *main- Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int i;
	unsigned long int b = 1;
	unsigned long int a = 2;
	unsigned long int c = 1000000000;

	unsigned long int b1;
	unsigned long int b2;
	unsigned long int a1;
	unsigned long int a2;

	printf("%lu", b);
	for (i = 1; i < 91; i++)
	{
		printf(", %lu", a);
		a += b;
		b = a - b;
	}
	b1 = (b / c);
	b2 = (b % c);
	a1 = (a / c);
	a2 = (a % c);
	for (i = 92; i < 99; i++)
	{
		printf(", %lu", a1 + (a2 / c));
		printf("%lu", a2 % c);
		a1 = a1 + b1;
		b1 = a1 - b1;
		a2 = a2 + b2;
		b2 = a2 - b2;
	}
	printf("\n");
	return (0);
}
