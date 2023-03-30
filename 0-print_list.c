#include "main.h"
/**
 * print_list - prints all elements of a list
 * @h: the singly linked list
 * Return: number of elements in the list
 */
size_t print_list(const list_t *h)
{
	size_t lem;

	lem = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		lem++;
	}
	return (lem);
}
