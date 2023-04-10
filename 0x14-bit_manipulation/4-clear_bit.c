#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0
 * @n: pointer to an unsigned long int
 * @index: index of the bit
 * Return: 1 if it worked, -1 if it didn't
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int ui;

	if (index > 63)
		return (-1);

	ui = 1 << index;

	if (*n & ui)
		*n ^= ui;

	return (1);
}
