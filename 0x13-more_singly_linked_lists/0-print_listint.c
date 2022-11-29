#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints the elements of listint_t list
 * @h: head of the node linklist
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t u = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		u++;
	}
	return (u);
}
