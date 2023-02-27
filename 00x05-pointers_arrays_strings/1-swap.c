#include "main.h"
/**
 *swap_int- swaps variable values
 *@a: first point
 * @b: second pointer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c = *b;
	*b = *a;
	*a = c;
}
