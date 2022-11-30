#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint_end - add node at end of a listint_t list.
 * @head: head of double pointer
 * @n: int add the list
 * Return: failed,if NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *i;
	listint_t *j;

	if (head == NULL)
		return (NULL);
	i = malloc(sizeof(listint_t));
	if (i == NULL)
		return (NULL);
	i->n = n;
	i->next = NULL;
	if (*head == NULL)
	{
		*head = i;
		return (i);
	}

	j = *head;
	while (j->next != NULL)
	{
		j = j->next;
	}
	j->next = i;
	return (i);
}

