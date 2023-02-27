#include "maain.h"
/**
 * rev_string -prints reversed string
 * @s: pointer
 * Return: void
 */
void rev_string(char *s)
{
	int a = 0, b = 0;
	char str[500];

	while (*(s + a))
	{
		*(str + a) = *(s + a);
		a++;
	}
	a = a - 1;
	while (a >= 0)
	{
		*(s + a) = *(str + b);
		b++;
		a--;
	}
}
