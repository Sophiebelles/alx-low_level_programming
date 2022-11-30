#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * reverse_listint - the function that reverses a listint_t
 * @head: double pointer
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *y, *z;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	y = NULL;
	while (*head != NULL)
	{
		z = (*head)->next;
		(*head)->next = y;
		y = *head;
		*head = z;
	}
	*head = y;
	return (*head);
}
