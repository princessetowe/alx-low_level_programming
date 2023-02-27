#include "main.h"
/**
 * puts2- prints every otjher character of a string
 * @str: input string
 * Return: none
 */
void puts2(char *str)
{
	int a = 0;

	while (a >= 0)
	{
		if (str[a] != '\0')
		{
			if (a % 2 == 0)
			{
				_putchar(str[a]);
			}
			a++;
		}
		else
		{
			a = -1;
			_putchar('\n');
		}
	}
}
