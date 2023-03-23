#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all parameters of the function
 * @n: number of arguments
 * Return: 0 if n == 0
 * If n != 0 return sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int a;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(list, n);

	for (a = 0; a < n; a++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
