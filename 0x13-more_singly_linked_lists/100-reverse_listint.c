#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: head of a list
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint *a;
	listint *b;

	a = NULL;
	b = NULL;

	while (*head != NULL)
	{
		b = (*head)->next;
		(*head)->next = a;
		a = *head;
		*head = b;
	}

	*head = a;
	return (*head);
}
