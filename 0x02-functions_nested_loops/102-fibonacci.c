#include <stdio.h>
/**
 *main - entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	long int a = 0, b = 0, next;

	while (i < 50)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu", next);
		if (i < 49)
		{
			printf(", ");
		}
		i++;
	}
	putchar('\n');
	return (0);
}
