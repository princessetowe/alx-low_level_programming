#include "main.h"
/**
 * reverse_array- reverse array of integer
 * @a: array
 * @n: numbers of elements in array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int b;
	int c;

	for (b = 0; b < n--; b++)
	{
		c = a[b];
		a[b] = a[n];
		a[n] = c;
	}
}
