#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * insert_nodeint_at_index - inserting a new node at agiven postion
 * @head: double pointer
 * @idx: index of the node
 * @n: new node value
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *p, *q;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		p = *head;
		for (i = 0; i < idx - 1 && p != NULL; i++)
		{
			p = p->next;
		}
		if (p == NULL)
			return (NULL);
	}
	q = malloc(sizeof(listint_t));
	if (q == NULL)
		return (NULL);
	q->n = n;
	if (idx == 0)
	{
		q->next = *head;
		*head = q;
		return (q);
	}
	q->next = p->next;
	p->next = q;
	return (q);
}
