#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _r - reallocates memory for an array of pointers
 * to the nodes in a linked list
 * @list: the old list to append
 * @size: size of the new list (always one more than the old list)
 * @new: new node to add to the list
 * Return: pointer to the new list
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **ne;
	size_t i;

	ne = malloc(size * sizeof(listint_t *));
	if (ne == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		ne[i] = list[i];
	ne[i] =new;
	free(list);
	return (ne);
}

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the start of the list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i, q = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (i = 0; i < q; i++)
		{
			if (head == list[i])
			{

				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (q);
			}
		}
		q++;
		list = _r(list, q, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (q);
}

