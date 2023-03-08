#include "main.h"
/**
 * prime - Entry point
 * @n: number
 * @i: iterator
 * Return: 1 if it is a prime number, 0 if it is nbot
 */
int prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime(n, i - 1));
}
/**
 * is_prime_number - Entry point
 * @n: number
 * Return: 1 if n is prime number, 0 if it is not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));
}
