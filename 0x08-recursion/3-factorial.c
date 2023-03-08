#include "main.h"
/**
 * factorial - Entry point
 * @n: number
 * Return: factorial n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
