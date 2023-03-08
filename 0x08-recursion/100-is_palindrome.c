#include "main.h"
/**
 * _strlen_recursion - Entry point
 * @s: string
 * Return: lenghth of a string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
/**
 * comp - compares each character of the string
 * @s: string
 * @n1: smallest iterator
 * @n2: biggest iyterator
 * Return: void
 */
int comp(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comp(s, n1 + 1, n2 - 1));
	}
	return (0);
}
/**
 * is_palindrome - detects if a string is palindrome
 * @s: string
 * Return: 1 if s is palindrome, 0 if it is not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comp(s, 0, _strlen_recursion(s) - 1));
}
