#include "main.h"

/**
 *largest_number- returns the largest of 3 numbers
 *@a: first integer
 *@b: second integer
 *@c: third integer
 *Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest = a;

	if (b >= a && b >= c)
	{
		largest = b;
		return (largest);
	}
	else if (c >= a && c >= a)
	{
		largest = c;
		return (largest);
	}
	return (largest);
}
