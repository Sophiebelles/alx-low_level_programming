#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_nodeint_at_index - the nth node of a listint_t linked list
 * @head: pointer of the first node
 * Return: sum of  all the data
 */
int sum_listint(listint_t *head)
{
	int k = 0;

	while (head != NULL)
	{
		k += head->n;
		head = head->next;
	}
	return (k);
}
