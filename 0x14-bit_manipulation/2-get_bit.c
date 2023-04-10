#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned long int
 * @index: index of of the bit
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int ui;

	if (n == 0 && index < 64)
		return (0);

	for (ui = 0; ui <= 63; n >>= 1, ui++)
	{
		if (index == 1)
		{
			return (n & 1);
		}
	}

	return (-1);
}
