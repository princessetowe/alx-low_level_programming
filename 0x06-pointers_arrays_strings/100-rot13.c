#include "main.h"
/**
 * rot13- encodes a string using rot13
 * @s: input string
 * Return: string
 */
char *rot13(char *s)
{
	int a = 0,i;
	char data[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char data2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s[a] != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (s[a] == data[i])
			{
				s[a] = data2[i];
				break;
			}
		}
		a++;
	}
	return (s);
}			
