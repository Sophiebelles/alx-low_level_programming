#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: double pointer
 * @index: index of the node
 * Return: pointer to the index node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *p, *q;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		q = (*head)->next;
		free(*head);
		*head = q;
		return (1);
	}
	p = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (p->next == NULL)
			return (-1);
		p = p->next;
	}
	q = p->next;
	p->next = q->next;
	free(q);
	return (1);

}
