#include "main.h"
/**
 * _puts - prints str
 * @str: pointer to the string
 * Retuen: void
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
