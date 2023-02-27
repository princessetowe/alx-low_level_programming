#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements in an array of integers
 * @a: array
 * @n: number of elements inarray
 * Return: none
 */
void print_array(int *a, int n)
{
	int b = 0;

	for (; b < n; b++)
	{
		printf("%d", *(a + b));
		if (b != (n - 1))
			printf(", ");
	}
	printf("\n");
}
