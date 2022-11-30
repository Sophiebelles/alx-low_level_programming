#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pop_listint - deletes the head node
 * @head:  double pointer
 *Return: empty
 */
int pop_listint(listint_t **head)
{
	listint_t *undo;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	undo = *head;
	*head = undo->next;
	n = undo->n;
	free(undo);
	return (n);
}
