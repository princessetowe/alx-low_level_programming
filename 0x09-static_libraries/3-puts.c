#include "main.h"
/**
 * _puts - prints string
 * @str: pointer
 * Return: none
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
