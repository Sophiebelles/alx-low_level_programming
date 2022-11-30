#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint - frees a listint_t list
 * @head: head of the list
 * Return: if error, NULL
 */
void free_listint(listint_t *head)
{
	listint_t *p;

	while (head != NULL)
	{
		p = head->next;
		free(head);
		head = p;
	}
}
