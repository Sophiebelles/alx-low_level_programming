#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - add node at beginning of  listint_t list.
 * @head: head of double pointer
 * @n: int add the list
 * Return: NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *y;

	if (head == NULL)
		return (NULL);
	y = malloc(sizeof(listint_t));
	if (y == NULL)
		return (NULL);
	y->n = n;
	y->next = *head;
	*head = y;
	return (y);
}

