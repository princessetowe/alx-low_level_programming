#include "main.h"
/**
 * cap_string- capitalizes all words of a string
 * @s: input string
 * Return: pointer
 */
char *cap_string(char *s)
{
	int a = 0, b;
	int words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (s[a] >= 97 && s[a] <= 122)
		s[a] = s[a] - 32;
	a++;
	while (s[a] != '\0')
	{
		for (b = 0; b < 13; b++)
		{
			if (s[a] == words[b])
			{
				if ((*(s + (a + 1)) >= 97) && (*(s + (a + 1)) <= 122))
					*(s + (a + 1)) = *(s + (a + 1)) - 32;
				break;
			}
		}
		a++;
	}
	return (s);
}
