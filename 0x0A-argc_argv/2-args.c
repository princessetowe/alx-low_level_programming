#include <stdio.h>
#define UNUSED(x) (void)(x)
/**
 * main - Entry point
 * @argc: argument
 * @argv: vector of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char  *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
